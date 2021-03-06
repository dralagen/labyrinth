/**
 * \file DEquip.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquip.hpp"

#include <iostream>
#include <sstream>
#include <unistd.h>

DEquip::DEquip(Equipement *e) {
	e_ = e;
}

DEquip::~DEquip() {
	delete e_;
}

int DEquip::getBchance()
{
	return bchance_ + e_->getBchance();
}

int DEquip::getArmure()
{
	return armure_ + e_->getArmure();
}

int DEquip::getBforce()
{
	return bforce_ + e_->getBforce();
}

int DEquip::getBvie()
{
	return bvie_ + e_->getBvie();
}

int DEquip::type()
{
	if (e_ == NULL)
		return EQBONUS;

	return e_->type();
}

std::string DEquip::replace(std::string str) {
	std::size_t trouve;
	std::string nom;
	trouve = e_->getNom().find(str+"+");                                        //On recherche si le nom possède la string passée en paramètre suivis de "+"
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e_->getNom().substr(trouve+str.length()+1,2));      //On récupère la valeur après le "+"
		int i;
		buff >> i;                                                                  //On convertis cette valeur en entier pour l'imcrémenter
		i++;
		std::ostringstream convert;
		convert << i;                                                               //On la reconvertis en String pour la remettre dans le nom
		if (i > 9)
			nom = e_->getNom().replace(trouve+str.length()+1,2,convert.str());      //Si i>9 on passe a +10
		else
			nom = e_->getNom().replace(trouve+str.length()+1,1,convert.str());
	}
	else
	{
		trouve = e_->getNom().find(str);                                         //Sinon on cherche si le nom possède la string passée en paramètre
		if(trouve!=std::string::npos)
		{
			nom = e_->getNom().insert(trouve+str.length(),"+1 ");                       //Si oui, on ajoute "+1" après cette string
		}
		else
		{
			nom = e_->getNom()+str;                                                     //Si la string n'est pas contenue dans le nom ,
			                                                                            //on l'ajoute à la fin du nom
		}
	}

	return nom;
}


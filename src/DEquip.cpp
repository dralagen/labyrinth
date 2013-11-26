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
	trouve = e_->getNom().find(str+"+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e_->getNom().substr(trouve+str.length()+1,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			nom = e_->getNom().replace(trouve+str.length()+1,2,convert.str());
		else
			nom = e_->getNom().replace(trouve+str.length()+1,1,convert.str());
	}
	else
	{
		trouve = e_->getNom().find(str);
		if(trouve!=std::string::npos)
		{
			nom = e_->getNom().insert(trouve+str.length(),"+1 ");
		}
		else
		{
			nom = e_->getNom()+str;
		}
	}

	return nom;
}


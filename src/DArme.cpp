/**
 * \file DArme.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "DArme.hpp"

DArme::DArme(Arme *e) {
	e_ = e;
}

DArme::~DArme() {
	delete e_;
}

int DArme::getBchance()
{
	return e_->getBchance() + bchance_;
}

int DArme::getDegat()
{
	return e_->getDegat() + degat_;
}

int DArme::getBforce()
{
	return e_->getBforce() + bforce_;
}

int DArme::getBvie()
{
	return e_->getBvie() + bvie_;
}

std::string DArme::replace(std::string str) {
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


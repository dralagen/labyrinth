
#include "DArmeV.hpp"

DArmeV::DArmeV(Arme * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find(" de Vie+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e->getNom().substr(trouve+8,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			e->setNom(e->getNom().replace(trouve+8,2,convert.str()));
		else
			e->setNom(e->getNom().replace(trouve+8,1,convert.str()));
	}
	else
	{
		trouve = e->getNom().find(" de Vie");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+7,"+1 "));
		}
		else
		{
			e->setNom(e->getNom()+" de Vie");
		}

	}
	e->setBvie(e->getBvie()+2);
}

DArmeV::~DArmeV() {
	delete e_;
}

std::string DArmeV::getNom()
{
	return e_->getNom();
}
int DArmeV::getBchance()
{
	return e_->getBchance();
}

int DArmeV::getDegat()
{
	return e_->getDegat();
}

int DArmeV::getBforce()
{
	return e_->getBforce();
}


int DArmeV::getBvie()
{
	return e_->getBvie();
}

void DArmeV::setBvie(int bvie)
{
	e_->setBvie(bvie);
}

void DArmeV::setBchance(int bchance)
{
	e_->setBchance(bchance);
}

void DArmeV::setDegat(int degat)
{
	e_->setDegat(degat);
}

void DArmeV::setBforce(int bforce)
{
	e_->setBforce(bforce);
}
void DArmeV::setNom(std::string nom)
{
	e_->setNom(nom);
}

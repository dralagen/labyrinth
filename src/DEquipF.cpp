
#include "DEquipF.hpp"

DEquipF::DEquipF(Equipement * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find(" de Force+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e->getNom().substr(trouve+10,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			e->setNom(e->getNom().replace(trouve+10,2,convert.str()));
		else
			e->setNom(e->getNom().replace(trouve+10,1,convert.str()));
	}
	else
	{
		trouve = e->getNom().find(" de Force");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+9,"+1 "));
		}
		else
		{
			e->setNom(e->getNom()+" de Force");
		}

	}
	e->setBforce(e->getBforce()+2);
}

DEquipF::~DEquipF() {
	delete e_;
}

std::string DEquipF::getNom()
{
	return e_->getNom();
}
int DEquipF::getBchance()
{
	return e_->getBchance();
}

int DEquipF::getArmure()
{
	return e_->getArmure();
}

int DEquipF::getBforce()
{
	return e_->getBforce();
}


int DEquipF::getBvie()
{
	return e_->getBvie();
}

void DEquipF::setBvie(int bvie)
{
	e_->setBvie(bvie);
}

void DEquipF::setBchance(int bchance)
{
	e_->setBchance(bchance);
}

void DEquipF::setArmure(int armure)
{
	e_->setArmure(armure);
}

void DEquipF::setBforce(int bforce)
{
	e_->setBforce(bforce);
}
void DEquipF::setNom(std::string nom)
{
	e_->setNom(nom);
}

int DEquipF::type()
{
	return e_->type();
}

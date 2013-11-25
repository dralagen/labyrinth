#include "DEquip.hpp"

DEquip::~DEquip() {
	delete e_;
}

std::string DEquip::getNom()
{
	return e_->getNom();
}
int DEquip::getBchance()
{
	return e_->getBchance();
}

int DEquip::getArmure()
{
	return e_->getArmure();
}

int DEquip::getBforce()
{
	return e_->getBforce();
}


int DEquip::getBvie()
{
	return e_->getBvie();
}

void DEquip::setBvie(int bvie)
{
	e_->setBvie(bvie);
}

void DEquip::setBchance(int bchance)
{
	e_->setBchance(bchance);
}

void DEquip::setArmure(int armure)
{
	e_->setArmure(armure);
}

void DEquip::setBforce(int bforce)
{
	e_->setBforce(bforce);
}
void DEquip::setNom(std::string nom)
{
	e_->setNom(nom);
}

int DEquip::type()
{
	if (e_ == NULL)
		return EQBONUS;

	return e_->type();
}


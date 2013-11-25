#include "DArme.hpp"

DArme::~DArme() {
	delete e_;
}

std::string DArme::getNom()
{
	return e_->getNom();
}
int DArme::getBchance()
{
	return e_->getBchance();
}

int DArme::getDegat()
{
	return e_->getDegat();
}

int DArme::getBforce()
{
	return e_->getBforce();
}


int DArme::getBvie()
{
	return e_->getBvie();
}

void DArme::setBvie(int bvie)
{
	e_->setBvie(bvie);
}

void DArme::setBchance(int bchance)
{
	e_->setBchance(bchance);
}

void DArme::setDegat(int Degat)
{
	e_->setDegat(Degat);
}

void DArme::setBforce(int bforce)
{
	e_->setBforce(bforce);
}
void DArme::setNom(std::string nom)
{
	e_->setNom(nom);
}


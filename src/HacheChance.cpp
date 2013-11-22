#include "HacheChance.hpp"

HacheChance::HacheChance()
{
	nom_ = "Hache de Chance";
	degat_ = 20;
	bchance_ = 4;
	bforce_ = 2;
	bvie_ = 0;
}

HacheChance::~HacheChance() {
}

std::string HacheChance::getNom()
{
	return nom_;
}

int HacheChance::getBchance()
{
	return bchance_;
}

int HacheChance::getDegat()
{
	return degat_;
}

int HacheChance::getBforce()
{
	return bforce_;
}


int HacheChance::getBvie()
{
	return bvie_;
}

void HacheChance::setBvie(int bvie)
{
	bvie_ = bvie;
}

void HacheChance::setBchance(int bchance)
{
	bchance_ = bchance;
}

void HacheChance::setDegat(int degat)
{
	degat_ = degat;
}

void HacheChance::setBforce(int bforce)
{
	bforce_ = bforce;
}

void HacheChance::setNom(std::string nom)
{
	nom_ = nom;
}

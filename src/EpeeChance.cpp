#include "EpeeChance.hpp"


EpeeChance::EpeeChance()
{
	nom_ = "Epee de Chance";
	degat_ = 15;
	bchance_ = 4;
	bforce_ = 0;
	bvie_ = 2;
}

EpeeChance::~EpeeChance() {
}

std::string EpeeChance::getNom()
{
	return nom_;
}

int EpeeChance::getBchance()
{
	return bchance_;
}

int EpeeChance::getDegat()
{
	return degat_;
}

int EpeeChance::getBforce()
{
	return bforce_;
}


int EpeeChance::getBvie()
{
	return bvie_;
}

void EpeeChance::setBvie(int bvie)
{
	bvie_ = bvie;
}

void EpeeChance::setBchance(int bchance)
{
	bchance_ = bchance;
}

void EpeeChance::setDegat(int degat)
{
	degat_ = degat;
}

void EpeeChance::setBforce(int bforce)
{
	bforce_ = bforce;
}

void EpeeChance::setNom(std::string nom)
{
	nom_ = nom;
}

#include "JambeChance.hpp"

//JambeChance::~JambeChance() {}

JambeChance::JambeChance()
{
	nom_ = "Jambieres de Chance";
	armure_ = 7;
	bchance_ = 4;
	bforce_ = 0;
	bvie_ = 0;
}

std::string JambeChance::getNom()
{
	return nom_;
}

int JambeChance::getBchance()
{
	return bchance_;
}

int JambeChance::getArmure()
{
	return armure_;
}

int JambeChance::getBforce()
{
	return bforce_;
}


int JambeChance::getBvie()
{
	return bvie_;
}

void JambeChance::setBvie(int bvie)
{
	bvie_ = bvie;
}

void JambeChance::setBchance(int bchance)
{
	bchance_ = bchance;
}

void JambeChance::setArmure(int armure)
{
	armure_ = armure;
}

void JambeChance::setBforce(int bforce)
{
	bforce_ = bforce;
}

void JambeChance::setNom(std::string nom)
{
	nom_ = nom;
}

#include "JambeForce.hpp"

JambeForce::JambeForce()
{
	nom_ = "Jambieres de Force";
	armure_ = 7;
	bchance_ = 0;
	bforce_ = 4;
	bvie_ = 0;
}

std::string JambeForce::getNom()
{
	return nom_;
}

int JambeForce::getBchance()
{
	return bchance_;
}

int JambeForce::getArmure()
{
	return armure_;
}

int JambeForce::getBforce()
{
	return bforce_;
}


int JambeForce::getBvie()
{
	return bvie_;
}

void JambeForce::setBvie(int bvie)
{
	bvie_ = bvie;
}

void JambeForce::setBchance(int bchance)
{
	bchance_ = bchance;
}

void JambeForce::setArmure(int armure)
{
	armure_ = armure;
}

void JambeForce::setBforce(int bforce)
{
	bforce_ = bforce;
}

void JambeForce::setNom(std::string nom)
{
	nom_ = nom;
}

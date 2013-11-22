#include "TorseVie.hpp"

TorseVie::TorseVie()
{
	nom_ = "Plastron de Vie";
	armure_ = 10;
	bchance_ = 0;
	bforce_ = 0;
	bvie_ = 4;
}

std::string TorseVie::getNom()
{
	return nom_;
}

int TorseVie::getBchance()
{
	return bchance_;
}

int TorseVie::getArmure()
{
	return armure_;
}

int TorseVie::getBforce()
{
	return bforce_;
}


int TorseVie::getBvie()
{
	return bvie_;
}

void TorseVie::setBvie(int bvie)
{
	bvie_ = bvie;
}

void TorseVie::setBchance(int bchance)
{
	bchance_ = bchance;
}

void TorseVie::setArmure(int armure)
{
	armure_ = armure;
}

void TorseVie::setBforce(int bforce)
{
	bforce_ = bforce;
}

void TorseVie::setNom(std::string nom)
{
	nom_ = nom;
}

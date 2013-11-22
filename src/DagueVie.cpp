#include "DagueVie.hpp"

DagueVie::DagueVie()
{
	nom_ ="Dague de Vie";
	degat_ = 10;
	bchance_ = 2;
	bforce_ = 0;
	bvie_ = 4;
}

DagueVie::~DagueVie() {
}

std::string DagueVie::getNom()
{
	return nom_;
}

int DagueVie::getBforce()
{
	return bforce_;
}

int DagueVie::getDegat()
{
	return degat_;
}

int DagueVie::getBchance()
{
	return bchance_;
}


int DagueVie::getBvie()
{
	return bvie_;
}

void DagueVie::setBvie(int bvie)
{
	bvie_ = bvie;
}

void DagueVie::setBforce(int bforce)
{
	bforce_ = bforce;
}

void DagueVie::setDegat(int degat)
{
	degat_ = degat;
}

void DagueVie::setBchance(int bchance)
{
	bchance_ = bchance;
}

void DagueVie::setNom(std::string nom)
{
	nom_ = nom;
}

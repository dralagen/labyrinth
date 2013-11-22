#include "DagueForce.hpp"

DagueForce::DagueForce()
{
	nom_ = "Dague de Force";
	degat_ = 10;
	bchance_ = 2;
	bforce_ = 4;
	bvie_ = 0;
}

DagueForce::~DagueForce() {
}

std::string DagueForce::getNom()
{
	return nom_;
}

int DagueForce::getBforce()
{
	return bforce_;
}

int DagueForce::getDegat()
{
	return degat_;
}

int DagueForce::getBchance()
{
	return bchance_;
}


int DagueForce::getBvie()
{
	return bvie_;
}

void DagueForce::setBvie(int bvie)
{
	bvie_ = bvie;
}

void DagueForce::setBforce(int bforce)
{
	bforce_ = bforce;
}

void DagueForce::setDegat(int degat)
{
	degat_ = degat;
}

void DagueForce::setBchance(int bchance)
{
	bchance_ = bchance;
}

void DagueForce::setNom(std::string nom)
{
	nom_ = nom;
}

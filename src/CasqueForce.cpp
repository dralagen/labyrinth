#include "CasqueForce.hpp"

CasqueForce::CasqueForce()
{
	nom_ = "Casque de Force";
	armure_ = 5;
	bchance_ = 0;
	bforce_ = 4;
	bvie_ = 0;
}
std::string CasqueForce::getNom()
{
	return nom_;
}

int CasqueForce::getBchance()
{
	return bchance_;
}

int CasqueForce::getArmure()
{
	return armure_;
}

int CasqueForce::getBforce()
{
	return bforce_;
}


int CasqueForce::getBvie()
{
	return bvie_;
}

void CasqueForce::setBvie(int bvie)
{
	bvie_ = bvie;
}

void CasqueForce::setBchance(int bchance)
{
	bchance_ = bchance;
}

void CasqueForce::setArmure(int armure)
{
	armure_ = armure;
}

void CasqueForce::setBforce(int bforce)
{
	bforce_ = bforce;
}

void CasqueForce::setNom(std::string nom)
{
	nom_ = nom;
}

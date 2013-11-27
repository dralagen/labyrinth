/**
 * \file Equipement.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Equipement.hpp"

Equipement::Equipement():nom_(""), armure_(0), bchance_(0), bvie_(0), bforce_(0) {
}

Equipement::~Equipement() {
}

std::string Equipement::getNom()
{
	return nom_;
}

int Equipement::getBchance()
{
	return bchance_;
}

int Equipement::getArmure()
{
	return armure_;
}

int Equipement::getBforce()
{
	return bforce_;
}

int Equipement::getBvie()
{
	return bvie_;
}


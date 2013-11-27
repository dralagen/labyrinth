/**
 * \file Arme.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Arme.hpp"

Arme::Arme():nom_(""),degat_(0),bchance_(0),bvie_(0),bforce_(0) {
}

Arme::~Arme(){
}

std::string Arme::getNom()
{
	return nom_;
}

int Arme::getBchance()
{
	return bchance_;
}

int Arme::getDegat()
{
	return degat_;
}

int Arme::getBforce()
{
	return bforce_;
}


int Arme::getBvie()
{
	return bvie_;
}


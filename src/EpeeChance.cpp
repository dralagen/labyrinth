/**
 * \file EpeeChance.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "EpeeChance.hpp"


EpeeChance::EpeeChance():Epee()
{
	nom_ = "Epee de Chance";
	bchance_ = 4;
	bforce_ = 0;
	bvie_ = 2;
}

EpeeChance::~EpeeChance() {
}


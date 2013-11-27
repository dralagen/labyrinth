/**
 * \file Torse.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "Torse.hpp"

Torse::Torse():Equipement() {
	nom_    = "Torse";
	armure_ = 10;
}

Torse::~Torse(){
}

int Torse::type()
{
	return EQTORSE;
}


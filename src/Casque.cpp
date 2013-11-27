/**
 * \file Casque.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "Casque.hpp"

#include <iostream>

Casque::Casque():Equipement() {
	nom_ = "Casque";
	armure_ = 5;
}

Casque::~Casque() {
}

int Casque::type()
{
	return EQCASQUE;
}


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


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


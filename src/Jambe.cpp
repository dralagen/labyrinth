#include "Jambe.hpp"

Jambe::Jambe():Equipement(){
	nom_ = "Jambe";
	armure_ = 7;
}

Jambe::~Jambe(){
}

int Jambe::type()
{
	return EQJAMBE;
}


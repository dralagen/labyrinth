/**
 * \file Jambe.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
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


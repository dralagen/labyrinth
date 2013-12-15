/**
 * \file DEquipA.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquipA.hpp"

DEquipA::DEquipA(Equipement * e):DEquip(e)
{
	nom_ = replace(" d'Armure");
	armure_ = 2;
}

DEquipA::~DEquipA() {
}


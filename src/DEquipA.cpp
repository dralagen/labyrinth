/**
 * \file DEquipA.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquipA.hpp"

DEquipA::DEquipA(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Armure");
	armure_ = 2;
}

DEquipA::~DEquipA() {
}


/**
 * \file DEquipC.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquipC.hpp"

DEquipC::DEquipC(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Chance");
	bchance_ = 2;
}

DEquipC::~DEquipC() {
}


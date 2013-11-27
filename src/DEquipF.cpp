/**
 * \file DEquipF.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquipF.hpp"

DEquipF::DEquipF(Equipement * e): DEquip(e)
{
	nom_ = replace(" de Force");
	bforce_ = 2;
}

DEquipF::~DEquipF() {}


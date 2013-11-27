/**
 * \file DEquipV.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "DEquipV.hpp"

DEquipV::DEquipV(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Vie");
	bvie_ = 2;
}

DEquipV::~DEquipV() {
}


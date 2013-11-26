#include "DEquipA.hpp"

DEquipA::DEquipA(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Armure");
	armure_ = 2;
}

DEquipA::~DEquipA() {
}


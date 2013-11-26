#include "DEquipF.hpp"

DEquipF::DEquipF(Equipement * e): DEquip(e)
{
	nom_ = replace(" de Force");
	bforce_ = 2;
}

DEquipF::~DEquipF() {}


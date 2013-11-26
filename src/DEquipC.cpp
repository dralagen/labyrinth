#include "DEquipC.hpp"

DEquipC::DEquipC(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Chance");
	bchance_ = 2;
}

DEquipC::~DEquipC() {
}


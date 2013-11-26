#include "DEquipV.hpp"

DEquipV::DEquipV(Equipement * e):DEquip(e)
{
	nom_ = replace(" de Vie");
	bvie_ = 2;
}

DEquipV::~DEquipV() {
}


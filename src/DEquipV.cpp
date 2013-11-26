#include "DEquipV.hpp"

DEquipV::DEquipV(Equipement * e):DEquip(e)
{
	bvie_ = 2;
}

DEquipV::~DEquipV() {
}

std::string DEquipV::getNom() {
	return replace(" de Vie");
}


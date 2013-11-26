#include "DEquipF.hpp"

DEquipF::DEquipF(Equipement * e): DEquip(e)
{
	bforce_ = 2;
}

DEquipF::~DEquipF() {}

std::string DEquipF::getNom() {
	return replace(" de Force");
}


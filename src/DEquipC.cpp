#include "DEquipC.hpp"

DEquipC::DEquipC(Equipement * e):DEquip(e)
{
	bchance_ = 2;
}

DEquipC::~DEquipC() {
}

std::string DEquipC::getNom() {
	return replace(" de Chance");
}


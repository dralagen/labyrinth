#include "DEquipA.hpp"

DEquipA::DEquipA(Equipement * e):DEquip(e)
{
	armure_ = 2;
}

DEquipA::~DEquipA() {
}

std::string DEquipA::getNom() {
	return replace(" de Armure");
}


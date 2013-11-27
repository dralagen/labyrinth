/**
 * \file TreasureEquip.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "TreasureEquip.hpp"
#include "DEquipA.hpp"
#include "DEquipC.hpp"
#include "DEquipF.hpp"
#include "DEquipV.hpp"

TreasureEquip::TreasureEquip(int lvl) {
	if (lvl > 10)
		m_lvl = 10;
	else
		m_lvl = lvl;

}

TreasureEquip::~TreasureEquip() {
}

void TreasureEquip::open(Personnage &p) {
	ItemFactory *f = getFactory(rand());
	Equipement *e;

	switch (rand()%3) {
		case 1:
			e = f->GetCasque();
			break;
		case 2:
			e = f->GetTorse();
			break;
		default:
			e = f->GetJambe();
	}

	for (int i = 0; i < m_lvl ; ++i)  {
		switch (rand()%6) {
			case 0:
				e = new DEquipA(e);
				break;
			case 1:
				e = new DEquipC(e);
				break;
			case 2:
				e = new DEquipF(e);
				break;
			case 3:
				e = new DEquipV(e);
				break;
		}
	}
	delete f;
	p.trouverEquipement(e);

}


#include "TreasureEquip.hpp"
#include "DEquipA.hpp"
#include "DEquipC.hpp"
#include "DEquipF.hpp"
#include "DEquipV.hpp"

TreasureEquip::TreasureEquip(int lvl): m_e(0) {
	bool next=true;
	if (lvl > 8)
		lvl = 8;

	ItemFactory *f = getFactory(rand());

	switch (rand()%3) {
		case 1:
			m_e = f->GetCasque();
			break;
		case 2:
			m_e = f->GetTorse();
			break;
		default:
			m_e = f->GetJambe();
	}

	do {
		switch (rand()%(8-lvl/2)) {
			case 0:
				m_e = new DEquipA(m_e);
				break;
			case 1:
				m_e = new DEquipC(m_e);
				break;
			case 2:
				m_e = new DEquipF(m_e);
				break;
			case 3:
				m_e = new DEquipV(m_e);
			default:
			next = false;
		}

	} while (next);
}

TreasureEquip::~TreasureEquip() {}

void TreasureEquip::open(Personnage &p) {
	p.trouverEquipement(m_e);
}

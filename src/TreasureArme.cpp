#include "TreasureArme.hpp"
#include "DArmeD.hpp"
#include "DArmeC.hpp"
#include "DArmeF.hpp"
#include "DArmeV.hpp"

TreasureArme::TreasureArme(int lvl): m_a(0) {
	bool next=true;
	if (lvl > 8)
		lvl = 8;

	ItemFactory *f = getFactory(rand());

	switch (rand()%3) {
		case 1:
			m_a = f->GetEpee();
			break;
		case 2:
			m_a = f->GetDague();
			break;
		default:
			m_a = f->GetHache();
	}

	do {
		switch (rand()%(8-lvl/2)) {
			case 0:
				m_a = new DArmeD(m_a);
				break;
			case 1:
				m_a = new DArmeC(m_a);
				break;
			case 2:
				m_a = new DArmeF(m_a);
				break;
			case 3:
				m_a = new DArmeV(m_a);
			default:
			next = false;
		}

	} while (next);
}

TreasureArme::~TreasureArme() {}

void TreasureArme::open(Personnage &p) {
	p.trouverArme(m_a);
}

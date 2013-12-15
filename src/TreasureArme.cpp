/**
 * \file TreasureArme.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "TreasureArme.hpp"
#include "DArmeD.hpp"
#include "DArmeC.hpp"
#include "DArmeF.hpp"
#include "DArmeV.hpp"

#include "Random.hpp"

TreasureArme::TreasureArme(int lvl) {
	if (lvl > 10)
		m_lvl = 10;
	else
		m_lvl = lvl;
}

TreasureArme::~TreasureArme() {
}

void TreasureArme::open(Personnage &p) {
	Random *r = Random::getInstance();
	ItemFactory *f = getFactory(r->getRand());
	Arme *a;

	switch (r->getRand()%3) {
		case 1:
			a = f->GetEpee();
			break;
		case 2:
			a = f->GetDague();
			break;
		default:
			a = f->GetHache();
	}

	for (int i = 0; i < m_lvl; ++i) {
		switch (r->getRand()%6) {
			case 0:
				a = new DArmeD(a);
				break;
			case 1:
				a = new DArmeC(a);
				break;
			case 2:
				a = new DArmeF(a);
				break;
			case 3:
				a = new DArmeV(a);
				break;
		}
	}
	delete f;
	p.trouverArme(a);
}


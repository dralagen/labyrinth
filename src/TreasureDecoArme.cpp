#include "TreasureDecoArme.hpp"
#include "DArme.hpp"
#include "DArmeD.hpp"
#include "DArmeC.hpp"
#include "DArmeF.hpp"
#include "DArmeV.hpp"

#include <unistd.h>

TreasureDecoArme::TreasureDecoArme(int lvl):Treasure(lvl) {
}

TreasureDecoArme::~TreasureDecoArme(){
}

void TreasureDecoArme::open(Personnage &p) {
	if (p.getArme() != NULL) {
		for (int i = 0; i < (rand()%m_lvl)+1 ; ++i) {
		std::cout << "Amélioration d'arme de ";
		switch (rand()%4) {
				case 0:
					std::cout << "Dégat";
					p.setArme(new DArmeD(p.getArme()));
					break;
				case 1:
					std::cout << "Chance";
					p.setArme(new DArmeC(p.getArme()));
					break;
				case 2:
					std::cout << "Force";
					p.setArme(new DArmeF(p.getArme()));
					break;
				default:
					std::cout << "Vie";
					p.setArme(new DArmeV(p.getArme()));
		}
		std::cout << std::endl;
		}
	}
	else {
		std::cout << "Objet non utilisable" << std::endl;
	}
	sleep(1);
}
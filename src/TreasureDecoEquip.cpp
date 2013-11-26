#include "TreasureDecoEquip.hpp"

#include <unistd.h>

#include "DEquipA.hpp"
#include "DEquipC.hpp"
#include "DEquipF.hpp"
#include "DEquipV.hpp"

TreasureDecoEquip::TreasureDecoEquip(int lvl):Treasure(lvl) {
}

TreasureDecoEquip::~TreasureDecoEquip() {
}

void TreasureDecoEquip::open(Personnage &p) {
	std::string buff;
	Equipement *e;
	bool find = false;
	do {
		std::cout << "Équiepement à Amélioré ? (c,t ou j) ";
		std::cin >> buff;
		switch (buff[0]) {
			case 'c':
				e = p.getCasque();
				find = true;
				break;
			case 't':
				e = p.getTorse();
				find = true;
				break;
			case 'j':
				e = p.getJambe();
				find = true;
				break;
			default:
				find = false;
		}

	} while (!find);

	if (e != NULL) {
		for (int i = 0; i < (rand()%m_lvl)+1; ++i) {
			std::cout << "Amélioration d'équipement ";

			switch (rand()%4) {
				case 0:
					std::cout << "d'Armure";
					e = new DEquipA(e);
					break;
				case 1:
					std::cout << "de Chance";
					e = new DEquipC(e);
					break;
				case 2:
					std::cout << "de Force";
					e = new DEquipF(e);
					break;
				default:
					std::cout << "de Vie";
					e = new DEquipV(e);
			}
			std::cout << std::endl;
			p.setEquipement(e);
		}
		sleep(1);
	}
	else {
		std::cout << "Objet non utilisable" << std::endl;
	}

}


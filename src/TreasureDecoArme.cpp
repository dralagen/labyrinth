/**
 * \file TreasureDecoArme.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
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
			std::cout << COLOR_IMPROVEMENT << "Amélioration d'arme de ";
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
			std::cout << COLOR_RESET << std::endl;
			sleep(1);
		}
	}
	else {
		std::cout << COLOR_ERROR << "Objet non utilisable" << COLOR_RESET << std::endl;
	}
}


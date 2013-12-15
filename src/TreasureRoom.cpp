/**
 * \file TreasureRoom.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "TreasureRoom.hpp"
#include "TreasureEquip.hpp"
#include "TreasureArme.hpp"
#include "TreasureDecoArme.hpp"
#include "TreasureDecoEquip.hpp"

#include "Random.hpp"
#include <unistd.h>

TreasureRoom::TreasureRoom(int lvl):RoomComportement(lvl) {
	m_content = COLOR_MAP_TREASURE "Tr" COLOR_MAP_DEFAULT;
	m_treasure = 0;
}

TreasureRoom::~TreasureRoom() {
	delete m_treasure;
}

int TreasureRoom::action(Personnage &perso) {
	if (m_treasure == 0) {
		int random = Random::getRandom()%100;
		if (random < 25 - 15*perso.getNbArme()) {
			m_treasure = new TreasureArme(m_lvl);
		}
		else if (random < 25) {
			m_treasure = new TreasureDecoArme(m_lvl);
		}
		else if (random < 100 - 20*perso.getNbEquip()){
				m_treasure = new TreasureEquip(m_lvl);
		}
		else {
			m_treasure = new TreasureDecoEquip(m_lvl);
		}
	}
	std::cout << COLOR_PLAYER << perso.getNom() << COLOR_RESET " Vous avez trouvé un coffre" << std::endl;
	std::string buff;
	do {
		std::cout << "Voulez-vous l'ouvrir ?(y or n)" << std::endl;
		std::cin >> buff;
	} while (buff[0] == 'Y' || buff[0] == 'N');

	if (buff[0] == 'y') {
		m_treasure->open(perso);
		sleep(1);
		return RC_OPEN_TREASURE;
	}

	return RC_NOTHING;
}


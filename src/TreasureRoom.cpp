#include "TreasureRoom.hpp"
#include "TreasureEquip.hpp"
#include "TreasureArme.hpp"

TreasureRoom::TreasureRoom(int lvl):RoomComportement(lvl) {
	m_content = "Tr";

	int random = rand()%100;
	if (random < 25) {
			m_treasure = new TreasureArme(lvl);
	}
	else {
			m_treasure = new TreasureEquip(lvl);
	}
}

TreasureRoom::~TreasureRoom() {
	delete m_treasure;
}

int TreasureRoom::action(Personnage &perso) {
	std::cout << perso.getNom() << " Vous avez trouvé un coffre" << std::endl;
	std::string buff;
	do {
		std::cout << "Voulez-vous l'ouvrir ?(y or n)" << std::endl;
		std::cin >> buff;
	} while (buff[0] == 'Y' || buff[0] == 'N');

	if (buff[0] == 'y') {
		m_treasure->open(perso);
		return RC_OPEN_TREASURE;
	}

	return RC_NOTHING;
}

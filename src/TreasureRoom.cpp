#include "TreasureRoom.hpp"

TreasureRoom::TreasureRoom(int lvl): RoomComportement(lvl) {
	m_content = "Tr";
}

TreasureRoom::~TreasureRoom() {}

int TreasureRoom::action(Personnage &perso) {
	std::cout << perso.getNom() << " Vous avez trouvé un coffre" << std::endl;
	std::string buff;
	do {
	std::cout << "Voulez-vous l'ouvrir ?(y or n)" << std::endl;
	std::cin >> buff;
	} while (buff[0] == 'Y' || buff[0] == 'N');

	if (buff[0] == 'y') {
		return RC_OPEN_TREASURE;
	}

	return RC_NOTHING;
}

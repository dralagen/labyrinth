#include "TreasureRoom.hpp"

TreasureRoom::TreasureRoom() {
	m_content = "Tr";
}

TreasureRoom::~TreasureRoom() {}

int TreasureRoom::action() {
	std::cout << "Vous avez trouvé un coffre" << std::endl;
	std::string buff;
	do {
	std::cout << "Voulez-vous l'ouvrir ?(y or n)" << std::endl;
	std::cin >> buff;
	} while (buff[0] == 'Y' || buff[0] == 'N');

	if (buff[0] == 'y')
		return RC_TREASURE;

	return RC_NOTHING;
}

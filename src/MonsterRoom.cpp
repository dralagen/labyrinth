#include "MonsterRoom.hpp"

MonsterRoom::MonsterRoom() {
	m_content = "Mn";
}

MonsterRoom::~MonsterRoom() {}

int MonsterRoom::action() {
	std::cout << "Vous êtes tombez sur un monstre" << std::endl;
	std::string buff;
	do {
		std::cout << "Voulez-vous combattre ?(y or n)" << std::endl;
		std::cin >> buff;
	} while (buff.at(0) == 'Y' || buff.at(0) == 'N');

	if (buff[0] == 'y')
		return RC_CLEAN;

	return RC_UNDO;

}

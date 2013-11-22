#include "MonsterRoom.hpp"

MonsterRoom::MonsterRoom(int lvl):RoomComportement(lvl), m_monster(lvl)  {
	m_content = "Mn";
}

MonsterRoom::~MonsterRoom() {
}

int MonsterRoom::action(Personnage &perso) {
	std::cout << "Vous êtes tombez sur " << m_monster.getName() << std::endl;
	std::string buff;
	do {
		std::cout << "Voulez-vous le combattre ?(y or n)" << std::endl;
		std::cin >> buff;
	} while (buff.at(0) == 'Y' || buff.at(0) == 'N');

	if (buff[0] == 'y') {
		while (perso.getVie() > 0 && m_monster.getLife() > 0) {
			if (! m_monster.receive(perso.getForce())) {
				std::cout << m_monster.getLife() << std::endl;
				perso.modifierVie(m_monster.give()*-1);
			}
		}
		if (perso.getVie() > 0) {
			return RC_CLEAN_MONSTER;
		}
	}

	return RC_UNDO;

}

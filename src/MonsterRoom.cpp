/**
 * \file MonsterRoom.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */

#include "MonsterRoom.hpp"
#include "ColorTerm.hpp"

MonsterRoom::MonsterRoom(int lvl):RoomComportement(lvl), m_monster(lvl)  {
	m_content = COLOR_MAP_MONSTER "Mn" COLOR_MAP_DEFAULT;
}

MonsterRoom::~MonsterRoom() {
}

int MonsterRoom::action(Personnage &perso) {
	std::cout << "Vous êtes tombé sur " << m_monster.getName() << std::endl;
	std::string buff;
	do {
		std::cout << "Voulez-vous le combattre ?(y or n)" << std::endl;
		std::cin >> buff;
	} while (buff.at(0) == 'Y' || buff.at(0) == 'N');

	if (buff[0] == 'y') {
		int damageMonster, damagePerso;
		while (perso.isAlive() && m_monster.isAlive()) {
			damageMonster = m_monster.receiveDamage(perso.envoieDegat());
			std::cout << COLOR_MONSTER << m_monster.getName() << COLOR_RESET << " -" << COLOR_DAMAGE << damageMonster << COLOR_RESET <<  "PV";
			std::cout << " => " << COLOR_MONSTER_HP << m_monster.getLife() << COLOR_RESET << "PV" << std::endl;
			if (m_monster.isAlive()) {
				sleep(1);
				damagePerso = perso.recoitDegat(m_monster.giveDamage());
				std::cout << COLOR_PLAYER << perso.getNom() << COLOR_RESET << " -" << COLOR_DAMAGE << damagePerso  << COLOR_RESET << "PV";
				std::cout << " => " << COLOR_PLAYER_HP << perso.getVie() << COLOR_RESET << "PV" << std::endl;
				std::cout << std::endl;
				sleep(1);
			}
		}
		if (perso.getVie() > 0) {
			sleep(1);
			return RC_CLEAN_MONSTER;
		}
		else {
			std::cout<< COLOR_DEAD <<"Vous êtes mort"<< COLOR_RESET<<std::endl;
		}
	}

	return RC_UNDO;

}


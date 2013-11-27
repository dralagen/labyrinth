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
	m_content = "Mn";
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
			std::cout << m_monster.getName() << " -" << damageMonster << "PV";
			std::cout << " => " << m_monster.getLife() << "PV" << std::endl;
			if (m_monster.isAlive()) {
				sleep(1);
				damagePerso = perso.recoitDegat(m_monster.giveDamage());
				std::cout << perso.getNom() << " -" << damagePerso << "PV";
				std::cout << " => " << perso.getVie() << "PV" << std::endl;
				sleep(1);
			}
		}
		if (perso.getVie() > 0) {
			return RC_CLEAN_MONSTER;
		}
		else {
			ColorTerm::Edit death(ColorTerm::FG_RED);
			ColorTerm::Edit reset(ColorTerm::FG_DEFAULT);
			std::cout<<death<<"Vous êtes mort"<<reset<<std::endl;
		}
	}

	return RC_UNDO;

}


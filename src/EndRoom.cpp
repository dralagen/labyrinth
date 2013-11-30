/**
 * \file EndRoom.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "EndRoom.hpp"

EndRoom::EndRoom(int lvl): RoomComportement(lvl), m_boss(lvl) {
	m_content = COLOR_MAP_END "Ed" COLOR_MAP_DEFAULT;
}

EndRoom::~EndRoom() {
}

bool EndRoom::isEnd() const { return true; }

int EndRoom::action(Personnage &perso) {
	if (m_boss.action(perso) == RC_CLEAN_MONSTER) {
		std::cout << "Congratulation " COLOR_PLAYER << perso.getNom() << "\033[31m !! \033[33mYOU \033[32mW\033[34mI\033[36mN \033[35m!!" << std::endl;
		return RC_NOTHING;
	}
	return RC_UNDO;
}


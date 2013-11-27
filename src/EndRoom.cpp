/**
 * \file EndRoom.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "EndRoom.hpp"

EndRoom::EndRoom(int lvl): RoomComportement(lvl), m_boss(lvl) {
	m_content = "Ed";
}

EndRoom::~EndRoom() {
}

bool EndRoom::isEnd() const { return true; }

int EndRoom::action(Personnage &perso) {
	if (m_boss.action(perso) == RC_CLEAN_MONSTER) {
		std::cout << "Congratulation " << perso.getNom() << " !! You win !!" << std::endl;
		return RC_NOTHING;
	}
	return RC_UNDO;
}


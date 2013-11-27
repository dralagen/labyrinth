/**
 * \file StartRoom.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "StartRoom.hpp"

StartRoom::StartRoom(int lvl):RoomComportement(lvl) {
	m_content = "St";
}

StartRoom::~StartRoom() {}

int StartRoom::action(Personnage &perso) {
	std::cout << perso.getNom()<< " à vous de trouver la sortie" << std::endl;
	return RC_NOTHING;
}


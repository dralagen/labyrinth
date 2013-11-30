/**
 * \file StartRoom.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "StartRoom.hpp"

StartRoom::StartRoom(int lvl):RoomComportement(lvl) {
	m_content = COLOR_MAP_START "St" COLOR_MAP_DEFAULT;
}

StartRoom::~StartRoom() {}

int StartRoom::action(Personnage &perso) {
	std::cout << COLOR_PLAYER << perso.getNom()<< COLOR_RESET " à vous de trouver la sortie" << std::endl;
	return RC_NOTHING;
}


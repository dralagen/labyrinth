/**
 * \file EmptyRoom.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "EmptyRoom.hpp"

EmptyRoom::EmptyRoom(int lvl):RoomComportement(lvl) {}

EmptyRoom::~EmptyRoom() {}

int EmptyRoom::action(Personnage &perso) {
	perso.modifierVie(3);
	return RC_NOTHING;
}


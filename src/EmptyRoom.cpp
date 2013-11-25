#include "EmptyRoom.hpp"

EmptyRoom::EmptyRoom(int lvl):RoomComportement(lvl) {}

EmptyRoom::~EmptyRoom() {}

int EmptyRoom::action(Personnage &perso) {
	perso.modifierVie(3);
	return RC_NOTHING;
}


#include "StartRoom.hpp"

StartRoom::StartRoom(int lvl):RoomComportement(lvl) {
	m_content = "St";
}

StartRoom::~StartRoom() {}

int StartRoom::action(Personnage &perso) {
	std::cout << perso.getNom()<< " à vous de trouver la sortie" << std::endl;
	return RC_NOTHING;
}


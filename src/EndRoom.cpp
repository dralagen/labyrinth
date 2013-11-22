#include "EndRoom.hpp"

EndRoom::EndRoom(int lvl): RoomComportement(lvl){
 	m_content = "Ed";
}

EndRoom::~EndRoom() {}

bool EndRoom::isEnd() const { return true; }

int EndRoom::action(Personnage &perso) {
	std::cout << "Congratulation " << perso.getNom() << " !! You win !!" << std::endl;
	return RC_NOTHING;
}

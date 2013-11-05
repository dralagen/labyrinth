#include "EndRoom.hpp"

EndRoom::EndRoom() : Room::Room() {
	m_content = "Ed";
}

bool EndRoom::isEnd() const { return !Room::isEnd(); }

void EndRoom::action() {
	std::cout << "You win !!" << std::endl;
}

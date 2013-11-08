#include "EndRoom.hpp"

EndRoom::EndRoom(){
 	m_content = "Ed";
}

EndRoom::~EndRoom() {}

bool EndRoom::isEnd() const { return true; }

bool EndRoom::action() {
	std::cout << "You win !!" << std::endl;
	return false;
}

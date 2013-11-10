#include "EndRoom.hpp"

EndRoom::EndRoom(){
 	m_content = "Ed";
}

EndRoom::~EndRoom() {}

bool EndRoom::isEnd() const { return true; }

int EndRoom::action() {
	std::cout << "You win !!" << std::endl;
	return RC_NOTHING;
}

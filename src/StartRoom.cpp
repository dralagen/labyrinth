#include "StartRoom.hpp"

StartRoom::StartRoom() {
 	m_content = "St";
}

StartRoom::~StartRoom() {}

int StartRoom::action() {
	std::cout << "Point de départ. Trouvez la sortie" << std::endl;
	return RC_NOTHING;
}


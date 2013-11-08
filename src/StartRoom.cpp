#include "StartRoom.hpp"

StartRoom::StartRoom() {
 	m_content = "St";
}

StartRoom::~StartRoom() {}

bool StartRoom::action() {
	std::cout << "Point de départ. Trouvez la sortie" << std::endl;
	return true;
}


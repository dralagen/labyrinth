#include "StartRoom.hpp"

StartRoom::StartRoom(): Room::Room() {
	m_content = "St";
}

void StartRoom::action() {
	std::cout << "Point de départ. Trouvez la sortie" << std::endl;
}


#include "TreasureRoom.hpp"

TreasureRoom::TreasureRoom():Room::Room() {
	m_content = "Tr";
}

void TreasureRoom::action() {
	std::cout << "Vous avez trouvé un coffre" << std::endl;
}

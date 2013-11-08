#include "TreasureRoom.hpp"

TreasureRoom::TreasureRoom() {
	m_content = "Tr";
}

TreasureRoom::~TreasureRoom() {}

bool TreasureRoom::action() {
	std::cout << "Vous avez trouvé un coffre" << std::endl;
	return true;
}

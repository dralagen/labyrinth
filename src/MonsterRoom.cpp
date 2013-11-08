#include "MonsterRoom.hpp"

MonsterRoom::MonsterRoom() {
	m_content = "Mn";
}

MonsterRoom::~MonsterRoom() {}

bool MonsterRoom::action() {
	std::cout << "Vous êtes tombez sur un monstre" << std::endl;
	return true;
}

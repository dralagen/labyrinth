#include "MonsterRoom.hpp"

MonsterRoom::MonsterRoom() : Room::Room() {
	m_content = "Mn";
}

void MonsterRoom::action() {
	std::cout << "Vous êtes tombez sur un monstre" << std::endl;
}

#include "RoomEtat.hpp"

RoomEtat::RoomEtat():m_room(0) {}

RoomEtat::RoomEtat(Room *r) {
	m_room = r;
}

RoomEtat::~RoomEtat() {}

void RoomEtat::print(std::string &t,
				 						 std::string &c,
						 				 std::string &b) const {
	t += FOG;
	c += FOG;
	b += FOG;
}

bool RoomEtat::visited() const { return false; }

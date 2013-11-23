#include "RoomEtat.hpp"
#include "Room.hpp"

RoomEtat::RoomEtat():m_room(0) {}

RoomEtat::RoomEtat(Room *r) {
	m_room = r;
}

RoomEtat::~RoomEtat() {}


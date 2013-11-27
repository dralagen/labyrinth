/**
 * \file RoomEtat.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "RoomEtat.hpp"
#include "Room.hpp"

RoomEtat::RoomEtat():m_room(0) {}

RoomEtat::RoomEtat(Room *r) {
	m_room = r;
}

RoomEtat::~RoomEtat() {}


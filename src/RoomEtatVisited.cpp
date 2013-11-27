/**
 * \file RoomEtatVisited.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "RoomEtatVisited.hpp"
#include "Room.hpp"

RoomEtatVisited::RoomEtatVisited(Room *r): RoomEtat(r) {}

RoomEtatVisited::~RoomEtatVisited() {}

void RoomEtatVisited::print(std::string &t,
														std::string &c,
														std::string &b) const {

	t += WALL;
	t += (m_room->getNorth())?OPEN_DOOR:CLOSED_DOOR;
	t += WALL;

	c += (m_room->getWest())?OPEN_DOOR:CLOSED_DOOR;
	c += m_room->getContent();
	c += (m_room->getEast())?OPEN_DOOR:CLOSED_DOOR;

	b += WALL;
	b += (m_room->getSouth())?OPEN_DOOR:CLOSED_DOOR;
	b += WALL;
}

bool RoomEtatVisited::visited() const { return true; }


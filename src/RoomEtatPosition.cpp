/**
 * \file RoomEtatPosition.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "RoomEtatPosition.hpp"
#include "Room.hpp"

RoomEtatPosition::RoomEtatPosition(Room *r): RoomEtat(r) {}

RoomEtatPosition::~RoomEtatPosition() {}


void RoomEtatPosition::print(std::string &t,
														 std::string &c,
														 std::string &b) const {

	t += WALL;
	t += (m_room->getNorth())?OPEN_DOOR:CLOSED_DOOR;
	t += WALL;

	c += (m_room->getWest())?OPEN_DOOR:CLOSED_DOOR;
	c += "Me";
	c += (m_room->getEast())?OPEN_DOOR:CLOSED_DOOR;

	b += WALL;
	b += (m_room->getSouth())?OPEN_DOOR:CLOSED_DOOR;
	b += WALL;
}

bool RoomEtatPosition::visited() const { return true; }


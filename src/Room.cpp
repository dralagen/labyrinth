#include "Room.hpp"
Room::Room(): m_content("  "), m_north(false), m_east(false), m_south(false), m_west(false)
{
}

void Room::top(std::string &s) const {
	s += WALL;
	s += (m_north)?OPEN_DOOR:CLOSED_DOOR;
	s += WALL;
}
void Room::center(std::string &s) const {
	s += (m_west)?OPEN_DOOR:CLOSED_DOOR;
	s += m_content;
	s += (m_east)?OPEN_DOOR:CLOSED_DOOR;
}
void Room::bottom(std::string &s) const {
	s += WALL;
	s += (m_south)?OPEN_DOOR:CLOSED_DOOR;
	s += WALL;
}

void Room::setNorth	(bool b)	{ m_north	= b; }
void Room::setEast	(bool b)	{ m_east	= b; }
void Room::setSouth	(bool b)	{ m_south	= b; }
void Room::setWest	(bool b) 	{ m_west	= b; }

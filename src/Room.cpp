#include "Room.hpp"
Room::Room(): m_content("vide"), m_north(false), m_east(false), m_south(false), m_west(false)
{
}

Room::~Room() {
}


void Room::top(std::string &s) const {
	s += BORDER;
	s += (m_north)?" ":BORDER;
	s += BORDER;
}
void Room::center(std::string &s) const {
	s += (m_west)?" ":BORDER;
	s += " ";
	s += (m_east)?" ":BORDER;
}
void Room::bottom(std::string &s) const {
	s += BORDER;
	s += (m_south)?" ":BORDER;
	s += BORDER;
}

void Room::setNorth	(bool b)	{ m_north	= b; }
void Room::setEast	(bool b)	{ m_east	= b; }
void Room::setSouth	(bool b)	{ m_south	= b; }
void Room::setWest	(bool b) 	{ m_west	= b; }

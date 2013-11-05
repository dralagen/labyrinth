#include "Room.hpp"

Room::Room(): m_content("  "), m_north(false), m_east(false), m_south(false), m_west(false) {
	m_etat = new RoomEtatUnvisited(this);
}

Room::~Room() {
	delete m_etat;
}

void Room::print(std::string &t, std::string &c, std::string &b, bool godMode) const {
	if (godMode) {
		top(t);
		center(c);
		bottom(b);
	} else {
		m_etat->print(t,c,b);
	}
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

void Room::setNorth   (bool  b) { m_north   = b; }
void Room::setEast    (bool  b) { m_east    = b; }
void Room::setSouth   (bool  b) { m_south   = b; }
void Room::setWest    (bool  b) { m_west    = b; }

void Room::setVisited () {
	delete m_etat;
	m_etat = new RoomEtatVisited(this);
}
void Room::setPosition () {
	delete m_etat;
	m_etat = new RoomEtatPosition(this);
}
void Room::setUnvisited () {
	delete m_etat;
	m_etat = new RoomEtatUnvisited(this);
}

bool Room::getNorth    ( ) const { return m_north;   }
bool Room::getEast     ( ) const { return m_east;    }
bool Room::getSouth    ( ) const { return m_south;   }
bool Room::getWest     ( ) const { return m_west;    }

bool Room::getVisited  ( ) const { return m_etat->visited(); }
bool Room::isEnd() const { return false; }


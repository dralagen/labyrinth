/**
 * \file Room.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Room.hpp"

Room::Room(): m_north(false),	m_east(false), m_south(false), m_west(false), m_comp(0), m_visited(this), m_position(this), m_unvisited(this) {
	m_etat = &m_unvisited;
}

Room::~Room() {
	// delete m_etat;
	delete m_comp;
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

int Room::action(Personnage &perso) {
	switch (m_comp->action(perso)) {
		case RC_CLEAN_MONSTER:
			setComportement(new TreasureRoom(m_comp->getLvl()));
			return action(perso);
			break;
		case RC_OPEN_TREASURE:
			setComportement(new EmptyRoom(m_comp->getLvl()));
			break;
		case RC_UNDO:
			return RC_UNDO;
			break;
	}

	return RC_NOTHING;
}

void Room::top(std::string &s) const {
	s += WALL;
	s += (m_north)?OPEN_DOOR:CLOSED_DOOR;
	s += WALL;
}
void Room::center(std::string &s) const {
	s += (m_west)?OPEN_DOOR:CLOSED_DOOR;
	s += m_comp->getContent();
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

void Room::setComportement (RoomComportement *r) {
	delete m_comp;
	m_comp = r;
}

void Room::setVisited () {
	m_etat = &m_visited;
}
void Room::setPosition () {
	m_etat = &m_position;
}
void Room::setUnvisited () {
	m_etat = &m_unvisited;
}

bool Room::getNorth    ( ) const { return m_north;   }
bool Room::getEast     ( ) const { return m_east;    }
bool Room::getSouth    ( ) const { return m_south;   }
bool Room::getWest     ( ) const { return m_west;    }

bool Room::getVisited  ( ) const { return m_etat->visited(); }
bool Room::isEnd() const { return m_comp->isEnd(); }

std::string Room::getContent() const { return m_comp->getContent(); }


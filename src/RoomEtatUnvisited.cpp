/**
 * \file RoomEtatUnvisited.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "RoomEtatUnvisited.hpp"
#include "Room.hpp"

RoomEtatUnvisited::RoomEtatUnvisited(Room *r) {
	m_room = r;
}

RoomEtatUnvisited::~RoomEtatUnvisited() {}

void RoomEtatUnvisited::print(std::string &t,
															std::string &c,
															std::string &b) const {
	t += FOG;
	c += FOG;
	b += FOG;
}

bool RoomEtatUnvisited::visited() const { return false; }


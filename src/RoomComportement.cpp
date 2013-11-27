/**
 * \file RoomComportement.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "RoomComportement.hpp"

RoomComportement::RoomComportement(int lvl):m_content("  "),m_lvl(lvl) {}

RoomComportement::~RoomComportement() {}

std::string RoomComportement::getContent() {
	return m_content;
}

int RoomComportement::getLvl() {
	return m_lvl;
}

bool RoomComportement::isEnd() const { return false; }


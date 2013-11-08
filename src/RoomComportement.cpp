#include "RoomComportement.hpp"

RoomComportement::RoomComportement():m_content("  ") {}

RoomComportement::~RoomComportement() {}

std::string RoomComportement::getContent() {
 return m_content;
}

bool RoomComportement::isEnd() const { return false; }

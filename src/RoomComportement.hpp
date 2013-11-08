#ifndef ROOMCOMPORTEMENT_HPP
#define ROOMCOMPORTEMENT_HPP

#include <string>

#include "Room.hpp"

class RoomComportement
{
	public:
		RoomComportement ();
		virtual ~RoomComportement();

		virtual bool action() = 0;
		virtual bool isEnd() const;

		std::string getContent();
	protected:
		std::string m_content;

};

#include "EmptyRoom.hpp"
#include "StartRoom.hpp"
#include "EndRoom.hpp"
#include "MonsterRoom.hpp"
#include "TreasureRoom.hpp"

#endif /* ROOMCOMPORTEMENT_HPP */


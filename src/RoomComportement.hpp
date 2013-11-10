#ifndef ROOMCOMPORTEMENT_HPP
#define ROOMCOMPORTEMENT_HPP

#include <string>
#include <iostream>

#define RC_NOTHING 0
#define RC_CLEAN 1
#define RC_UNDO -1

class RoomComportement
{
	public:
		RoomComportement ();
		virtual ~RoomComportement();

		virtual int action() = 0;

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


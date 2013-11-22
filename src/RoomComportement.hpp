#ifndef ROOMCOMPORTEMENT_HPP
#define ROOMCOMPORTEMENT_HPP

#include <string>
#include <iostream>

#include "Personnage.hpp"

#define RC_NOTHING 0
#define RC_OPEN_TREASURE  1
#define RC_CLEAN_MONSTER  2
#define RC_UNDO -1

class RoomComportement
{
	public:
		RoomComportement (int lvl = 10);
		virtual ~RoomComportement();

		virtual int action(Personnage &p) = 0;
		virtual bool isEnd() const;

		int getLvl();
		std::string getContent();
	protected:
		std::string m_content;
		int m_lvl;

};

#include "EmptyRoom.hpp"
#include "StartRoom.hpp"
#include "EndRoom.hpp"
#include "MonsterRoom.hpp"
#include "TreasureRoom.hpp"

#endif /* ROOMCOMPORTEMENT_HPP */


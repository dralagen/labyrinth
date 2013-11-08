#ifndef MONSTERROOM_HPP
#define MONSTERROOM_HPP

#include "RoomComportement.hpp"

class MonsterRoom : public RoomComportement
{
	public:
		MonsterRoom ();
		virtual ~MonsterRoom ();

		virtual bool action();
};

#endif /* MONSTERROOM_HPP */


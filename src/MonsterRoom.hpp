#ifndef MONSTERROOM_HPP
#define MONSTERROOM_HPP

#include "Room.hpp"

class MonsterRoom : public Room
{
	public:
		MonsterRoom ();
		//virtual ~MonsterRoom ();

		virtual void action();
};

#endif /* MONSTERROOM_HPP */


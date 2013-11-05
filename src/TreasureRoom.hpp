#ifndef TREASUREROOM_HPP
#define TREASUREROOM_HPP

#include "Room.hpp"

class TreasureRoom : public Room
{
	public:
		TreasureRoom ();
		//virtual ~TreasureRoom ();

		virtual void action();
};

#endif /* TREASUREROOM_HPP */


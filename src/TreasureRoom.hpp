#ifndef TREASUREROOM_HPP
#define TREASUREROOM_HPP

#include "RoomComportement.hpp"

class TreasureRoom : public RoomComportement
{
	public:
		TreasureRoom ();
		virtual ~TreasureRoom ();

		virtual bool action();
};

#endif /* TREASUREROOM_HPP */


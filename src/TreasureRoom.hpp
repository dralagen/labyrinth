#ifndef TREASUREROOM_HPP
#define TREASUREROOM_HPP

#include "RoomComportement.hpp"

class TreasureRoom : public RoomComportement
{
	public:
		TreasureRoom (int lvl = 0);
		virtual ~TreasureRoom ();

		virtual int action(Personnage &perso);
};

#endif /* TREASUREROOM_HPP */


#ifndef TREASUREROOM_HPP
#define TREASUREROOM_HPP

#include "RoomComportement.hpp"
#include "Treasure.hpp"

class TreasureRoom : public RoomComportement
{
	public:
		TreasureRoom (int lvl = 0);
		virtual ~TreasureRoom ();

		virtual int action(Personnage &perso);
	private:
		Treasure *m_treasure;
};

#endif /* TREASUREROOM_HPP */


#ifndef EMPTYROOM_HPP
#define EMPTYROOM_HPP

#include "RoomComportement.hpp"

class EmptyRoom : public RoomComportement
{
	public:
		EmptyRoom (int lvl = 0);
		virtual ~EmptyRoom();

		virtual int action(Personnage &perso);
};

#endif /* EMPTYROOM_HPP */


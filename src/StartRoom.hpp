#ifndef STARTROOM_HPP
#define STARTROOM_HPP

#include "RoomComportement.hpp"

class StartRoom : public RoomComportement
{
	public:
		StartRoom (int lvl = 0);
		virtual ~StartRoom();

		virtual int action(Personnage &perso);
};

#endif /* STARTROOM_HPP */


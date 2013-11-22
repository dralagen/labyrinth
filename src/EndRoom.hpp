#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "RoomComportement.hpp"

class EndRoom : public RoomComportement
{
	public:
		EndRoom (int lvl = 10);
		virtual ~EndRoom();

		virtual bool isEnd() const;

		virtual int action(Personnage &perso);
};

#endif /* ENDROOM_HPP */


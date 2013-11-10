#ifndef STARTROOM_HPP
#define STARTROOM_HPP

#include "RoomComportement.hpp"

class StartRoom : public RoomComportement
{
	public:
		StartRoom ();
		virtual ~StartRoom();

		virtual int action();
};

#endif /* STARTROOM_HPP */


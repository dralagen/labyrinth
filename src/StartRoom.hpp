#ifndef STARTROOM_HPP
#define STARTROOM_HPP

#include "Room.hpp"

class StartRoom : public Room
{
	public:
		StartRoom ();
		//virtual ~StartRoom();

		virtual void action();
};

#endif /* STARTROOM_HPP */


#ifndef EMPTYROOM_HPP
#define EMPTYROOM_HPP

#include "Room.hpp"

class EmptyRoom : public Room
{
	public:
		EmptyRoom ();
		//virtual ~EmptyRoom();

		virtual void action();

	private:
};

#endif /* EMPTYROOM_HPP */


#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "Room.hpp"

class EndRoom : public Room
{
	public:
		EndRoom ();
		//virtual ~EndRoom();

		virtual bool isEnd() const;

		virtual void action();
};

#endif /* ENDROOM_HPP */


#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "RoomComportement.hpp"

class EndRoom : public RoomComportement
{
	public:
		EndRoom ();
		virtual ~EndRoom();

		virtual bool isEnd() const;

		virtual bool action();
};

#endif /* ENDROOM_HPP */


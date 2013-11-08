#ifndef EMPTYROOM_HPP
#define EMPTYROOM_HPP

#include "RoomComportement.hpp"

class EmptyRoom : public RoomComportement
{
	public:
		EmptyRoom ();
		virtual ~EmptyRoom();

		virtual bool action();

	private:
};

#endif /* EMPTYROOM_HPP */


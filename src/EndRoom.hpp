#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "Room.hpp"

class EndRoom : public Room
{
	public:
		EndRoom ();
		//virtual ~EndRoom();

		bool isEnd() const;

	private:
		/* data */
};

#endif /* ENDROOM_HPP */


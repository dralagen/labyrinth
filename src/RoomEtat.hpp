#ifndef ROOMETAT_HPP
#define ROOMETAT_HPP

#include <string>
#include <iostream>

#include "Room.hpp"

class Room;
class RoomEtat
{
	public:
		RoomEtat();
		RoomEtat(Room *r);
		virtual ~RoomEtat ();

		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const;

		virtual bool visited() const;

	protected:
		Room *m_room;
};


#include "RoomEtatVisited.hpp"

#endif /* ROOMETAT_HPP */


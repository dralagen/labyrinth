#ifndef ROOMETAT_HPP
#define ROOMETAT_HPP

#include <string>
#include <iostream>


class Room;
class RoomEtat
{
	public:
		RoomEtat();
		RoomEtat(Room *r);
		virtual ~RoomEtat ();

		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const = 0;

		virtual bool visited() const = 0;

	protected:
		Room *m_room;
};

#endif /* ROOMETAT_HPP */


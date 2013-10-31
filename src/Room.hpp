#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#define WALL        "##"
#define OPEN_DOOR   "  "
#define CLOSED_DOOR "##"

class Room
{
	public:
		Room();
		//virtual ~Room();

		void top(std::string &s) const;
		void center(std::string &s) const;
		void bottom(std::string &s) const;

		void setNorth ( bool b );
		void setEast  ( bool b );
		void setSouth ( bool b );
		void setWest  ( bool b );

	protected:
		std::string m_content;
		bool m_north, m_east, m_south, m_west;
};

#endif // ROOM_HPP

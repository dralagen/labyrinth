#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#define BORDER "*"

class Room
{
	public:
		Room();
		~Room();

		void top(std::string &s) const;
		void center(std::string &s) const;
		void bottom(std::string &s) const;

		void setNorth(bool b);
		void setEast(bool b);
		void setSouth(bool b);
		void setWest(bool b);

	private:
		std::string m_content;
		bool m_north, m_east, m_south, m_west;
};

#endif // ROOM_HPP

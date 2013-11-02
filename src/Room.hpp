#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#define WALL        "##"
#define OPEN_DOOR   "  "
#define CLOSED_DOOR "##"
#define FOG					"******"

class Room
{
	public:
		Room();
		//virtual ~Room();

		void print  (std::string  &t,
								 std::string &c,
								 std::string &b,
								 bool godMode = false) const;

		virtual bool isEnd() const;

		/************
		 *  Setter  *
		 ************/

		void setNorth   (bool b);
		void setEast    (bool b);
		void setSouth   (bool b);
		void setWest    (bool b);
		void setVisited (bool b);

		/************
		 *  Getter  *
		 ************/
		bool getNorth   () const;
		bool getEast    () const;
		bool getSouth   () const;
		bool getWest    () const;
		bool getVisited () const;

	protected:
		std::string m_content;
		bool m_north, m_east, m_south, m_west;
		bool m_visited;

	private:
		void top    (std::string  &s) const;
		void center (std::string  &s) const;
		void bottom (std::string  &s) const;
};

#endif // ROOM_HPP

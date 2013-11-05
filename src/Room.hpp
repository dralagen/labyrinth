#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#include "RoomEtat.hpp"

#define WALL        "##"
#define EMPTY       "  "
#define POSITION    "Me"
#define OPEN_DOOR   "  "
#define CLOSED_DOOR "##"
#define FOG         "******"

class RoomEtat;

class Room
{
	public:
		Room();
		virtual ~Room();

		void print  (std::string &t,
								 std::string &c,
								 std::string &b,
								 bool godMode = false) const;

		virtual bool isEnd() const;

		virtual void action()=0;

		/************
		 *  Setter  *
		 ************/

		void setNorth   (bool b);
		void setEast    (bool b);
		void setSouth   (bool b);
		void setWest    (bool b);


		/***************
		 *  Etat Room  *
		 ***************/
		void setVisited   ();
		void setPosition  ();
		void setUnvisited ();

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

		RoomEtat *m_etat;

	private:
		void top    (std::string  &s) const;
		void center (std::string  &s) const;
		void bottom (std::string  &s) const;
};

#include "EmptyRoom.hpp"
#include "StartRoom.hpp"
#include "EndRoom.hpp"
#include "MonsterRoom.hpp"
#include "TreasureRoom.hpp"

#endif // ROOM_HPP

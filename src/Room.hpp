#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#include "RoomEtat.hpp"
#include "RoomComportement.hpp"


#define WALL        "##"
#define OPEN_DOOR   "  "
#define CLOSED_DOOR "##"
#define FOG         "******"

class RoomEtat;
class RoomComportement;

class Room
{
	public:
		Room();
		virtual ~Room();

		void print  (std::string &t,
								 std::string &c,
								 std::string &b,
								 bool godMode = false) const;

		bool isEnd() const;

		void action();

		/************
		 *  Setter  *
		 ************/
		void setNorth   (bool b);
		void setEast    (bool b);
		void setSouth   (bool b);
		void setWest    (bool b);
		void setComportement (RoomComportement *r);

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
		std::string getContent () const;
	protected:
		bool m_north, m_east, m_south, m_west;

		RoomEtat *m_etat;
		RoomComportement *m_comp;

	private:
		void top    (std::string  &s) const;
		void center (std::string  &s) const;
		void bottom (std::string  &s) const;
};


#endif // ROOM_HPP

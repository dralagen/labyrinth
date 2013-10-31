#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include "Room.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


struct pos {
	int x, y;
};

class Labyrinth
{
	public:
		Labyrinth(int x = 8, int y = 8);
		~Labyrinth();

		void print() const;
	private:
		int   m_tailleX, m_tailleY;
		Room **m_rooms;
		bool *m_visited;

		int position(int x, int y) const;
		int position(pos p) const;

		void init(pos p);
		void openDoor(pos p1, pos p2);
		bool hasAdjacent(pos p) const; // has an adjacent not visited
		pos oneAdjacent(pos p) const; // one adjacent not visited
};

#endif // LABYRINTH_HPP

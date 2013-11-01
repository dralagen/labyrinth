#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include "Room.hpp"
#include "EmptyRoom.hpp"
#include "StartRoom.hpp"
#include "EndRoom.hpp"
#include "MonsterRoom.hpp"
#include "TreasureRoom.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>


#define LABYRINTH_TAILLE_X_DEFAULT 8
#define LABYRINTH_TAILLE_Y_DEFAULT 8

struct pos {
	int x, y;
};

class Labyrinth
{
	public:
		Labyrinth(int x = LABYRINTH_TAILLE_X_DEFAULT, int y = LABYRINTH_TAILLE_Y_DEFAULT);
		~Labyrinth();
		Labyrinth(const Labyrinth &lab);
		Labyrinth& operator=(const Labyrinth &lab);


		void print(bool godMode = false) const;
	private:
		const int    m_tailleX  , m_tailleY;
		pos    m_current;
		Room **m_rooms;

		int position(int x, int y) const;
		int position(pos p) const;

		void init(pos p);
		void openDoor(pos p1, pos p2);
		bool hasAdjacent(pos p) const; // has an adjacent not visited
		pos oneAdjacent(pos p) const; // one adjacent not visited
};

#endif // LABYRINTH_HPP

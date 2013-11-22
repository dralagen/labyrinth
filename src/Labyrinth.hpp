#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include "Room.hpp"
#include "Personnage.hpp"

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
		Labyrinth(int x = LABYRINTH_TAILLE_X_DEFAULT,
							int y = LABYRINTH_TAILLE_Y_DEFAULT);
		~Labyrinth();
		//Labyrinth(const Labyrinth &lab);
		Labyrinth& operator=(const Labyrinth &lab);

		void print(bool godMode = false) const;
		void action(Personnage &perso);

		bool hasNorth() const;
		bool hasEast() const;
		bool hasSouth() const;
		bool hasWest() const;

		void goNorth();
		void goEast();
		void goSouth();
		void goWest();

		bool isEnd() const;
		void clean();
		void gen();
		void undo();

		void setStart(pos p);
		void setStart(int x, int y);
	private:
		const int m_tailleX    , m_tailleY;
		pos       m_current;
		pos       m_precedent;
		Room *m_rooms;
		bool m_gen;

		int position(int x, int y) const;
		int position(pos p) const;

		void newPosition();
		void _gen();

		void init(pos p);
		void openDoor(pos p1, pos p2);
		bool hasAdjacent(pos p) const; // has an adjacent not visited
		pos oneAdjacent(pos p) const; // one adjacent not visited
};

#endif // LABYRINTH_HPP

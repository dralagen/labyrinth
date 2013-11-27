/**
 * \file Labyrinth.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Labyrinth.hpp"

Labyrinth::Labyrinth(int x, int y) : m_tailleX(x), m_tailleY(y), m_gen(false) {
	if (x < 2 || y < 2)
		exit(1);

	srand(time(NULL));

	m_rooms = new Room[m_tailleX*m_tailleY];

	m_current.x = (rand()%m_tailleX);
	m_current.y = (rand()%m_tailleY);
	m_precedent = m_current;
}

Labyrinth::~Labyrinth() {
	delete[] m_rooms;
}

Labyrinth &Labyrinth::operator=(const Labyrinth &lab) {
	if (&lab != this) {
		Labyrinth tmp(lab);
		std::swap(tmp, *this);
	}
	return *this;
}

void Labyrinth::print(bool godMode) const {
	std::string top,bottom,center;

	for (int y = 0; y < m_tailleY; y++)
	{
		top="";
		center="";
		bottom="";
		for (int x = 0; x < m_tailleX; x++)
		{
			m_rooms[position(x,y)].print(top,center,bottom, godMode);
		}
		std::cout << top << std::endl << center << std::endl << bottom << std::endl;
	}
}

void Labyrinth::setStart(int x, int y) {
	if (x > 0 && y > 0 && !m_gen) {
		m_current.x = x%m_tailleX;
		m_current.y = y%m_tailleY;
	}
}

void Labyrinth::setStart(pos p) {
	setStart(p.x, p.y);
}

int Labyrinth::position(int x, int y) const {
	// limit x and y in the table
	if (x < 0)
		x=0;
	if (x >= m_tailleX)
		x=(m_tailleX-1);

	if (y < 0)
		y = 0;
	if (y >= m_tailleY)
		y = (m_tailleY-1);

	return (y*m_tailleX+x);
}
int Labyrinth::position(pos p) const {
	return position(p.x,p.y);
}

void Labyrinth::gen() {
	if (!m_gen) {
		_gen();
	}
}

void Labyrinth::_gen() {

	int random;
	for (int i = 0; i < m_tailleX*m_tailleY; ++i) {
		random = rand()%100;
		if (random < 60) {
			m_rooms[i].setComportement(new EmptyRoom(0));
		} else if (random < 70) {
			m_rooms[i].setComportement(new TreasureRoom(rand()%10+1));
		}	else {
			m_rooms[i].setComportement(new MonsterRoom(rand()%10+1));
		}
	}
	m_rooms[position(m_current)].setComportement(new StartRoom(0));

	pos p;
	do {
		p.x = (rand()%m_tailleX);
		p.y = (rand()%m_tailleY);
	} while (p.x == m_current.x && p.y == m_current.y);
	m_rooms[position(p)].setComportement(new EndRoom(10));


	init(p);
	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		m_rooms[i].setUnvisited();
	}

	/*********************************************
	 *  Relance l'init pour faire plus de porte  *
	 *********************************************/
	init(p);
	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		m_rooms[i].setUnvisited();
	}
	m_rooms[position(m_current)].setPosition();
}

void Labyrinth::init(pos p) {
	m_rooms[position(p)].setVisited();
	while (hasAdjacent(p)) {
		pos np = oneAdjacent(p); //choose the next salle
		openDoor(p,np);
		init(np);
	}
}

void Labyrinth::openDoor(pos p1, pos p2) {
	if (p1.x == p2.x && p1.y != p2.y) {
		if (p1.y == p2.y+1) {
			m_rooms[position(p1)].setNorth(true);
			m_rooms[position(p2)].setSouth(true);
		}
		else if (p1.y+1 == p2.y) {
			m_rooms[position(p1)].setSouth(true);
			m_rooms[position(p2)].setNorth(true);
		}
	}
	else if (p1.x != p2.x && p1.y == p2.y) {
		if (p1.x == p2.x+1) {
			m_rooms[position(p1)].setWest(true);
			m_rooms[position(p2)].setEast(true);
		}
		else if (p1.x+1 == p2.x) {
			m_rooms[position(p1)].setEast(true);
			m_rooms[position(p2)].setWest(true);
		}
	}
	// else not adjacent door.
}

bool Labyrinth::hasAdjacent(pos p) const {
	return !( m_rooms[position(p.x+1, p.y		)].getVisited()	&&
						m_rooms[position(p.x  , p.y+1	)].getVisited() &&
						m_rooms[position(p.x-1, p.y		)].getVisited() &&
						m_rooms[position(p.x  , p.y-1	)].getVisited()
					);
}

pos Labyrinth::oneAdjacent(pos p) const {
	pos np = p;
	int random = rand() % 4;
	do {
		switch (random) {
			case 1:
				if (!m_rooms[position(p.x-1, p.y)].getVisited()) {
					np.x = np.x-1;
				}
				break;
			case 2:
				if (!m_rooms[position(p.x+1, p.y)].getVisited()) {
					np.x = np.x+1;
				}
				break;
			case 3:
				if (!m_rooms[position(p.x, p.y-1)].getVisited()) {
					np.y = np.y-1;
				}

				break;
			default:
				if (!m_rooms[position(p.x, p.y+1)].getVisited()) {
					np.y = np.y+1;
				}

		}
		random = (random+1)%4;
	} while(np.x == p.x && np.y == p.y);
	return np;
}

bool Labyrinth::hasNorth() const{
	return m_rooms[position(m_current)].getNorth();
}

bool Labyrinth::hasEast() const{
	return m_rooms[position(m_current)].getEast();
}

bool Labyrinth::hasSouth() const{
	return m_rooms[position(m_current)].getSouth();
}

bool Labyrinth::hasWest() const{
	return m_rooms[position(m_current)].getWest();
}

void Labyrinth::goNorth() {
	if (hasNorth()) {
		m_precedent = m_current;
		m_current.y--;
		newPosition();
	}
}

void Labyrinth::goEast() {
	if (hasEast()) {
		m_precedent = m_current;
		m_current.x++;
		newPosition();
	}
}

void Labyrinth::goSouth() {
	if (hasSouth()) {
		m_precedent = m_current;
		m_current.y++;
		newPosition();
	}
}

void Labyrinth::goWest() {
	if (hasWest()) {
		m_precedent = m_current;
		m_current.x--;
		newPosition();
	}
}

void Labyrinth::newPosition() {
	m_rooms[position(m_precedent)].setVisited();
	m_rooms[position(m_current)].setPosition();
}

void Labyrinth::action(Personnage &perso) {
	if (m_rooms[position(m_current)].action(perso) == RC_UNDO) {
		undo();
	}
}

void Labyrinth::undo() {
	m_rooms[position(m_current)].setVisited();
	m_current = m_precedent;
	m_rooms[position(m_current)].setPosition();
}

void Labyrinth::clean() {
	m_rooms[position(m_current)].setComportement(new EmptyRoom());
}

bool Labyrinth::isEnd() const {
	return m_rooms[position(m_current)].isEnd();
}


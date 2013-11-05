#include "Labyrinth.hpp"

Labyrinth::Labyrinth(int x, int y) : m_tailleX(x), m_tailleY(y) {
	m_rooms = new Room*[m_tailleX*m_tailleY];

	srand(time(NULL));

	m_current.x = (rand()%m_tailleX);
	m_current.y = (rand()%m_tailleY);
	m_precedent = m_current;
	m_rooms[position(m_current)] = new StartRoom;

	pos p = {.x = (rand()%m_tailleX), .y = (rand()%m_tailleY)};
	m_rooms[position(p)] = new EndRoom;

	int random;
	for (int i = 0; i < m_tailleX*m_tailleY; ++i) {
		if (m_rooms[i] == NULL) {
			random = rand()%100;
			if (random < 30) {
				m_rooms[i] = new EmptyRoom;
			} else if (random < 50) {
				m_rooms[i] = new TreasureRoom;
			}	else {
				m_rooms[i] = new MonsterRoom;
			}
		}
	}

	init(p);
	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		m_rooms[i]->setUnvisited();
	}

	/*********************************************
	 *  Relance l'init pour faire plus de porte  *
	 *********************************************/
	init(p);
	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		m_rooms[i]->setUnvisited();
	}
	m_rooms[position(m_current)]->setVisited();
}

Labyrinth::Labyrinth(const Labyrinth &lab):m_tailleY(lab.m_tailleY), m_tailleX(lab.m_tailleX) {
	m_current = m_current;
	m_rooms = new Room*[m_tailleY*m_tailleX];

	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		m_rooms[i] = new Room(*lab.m_rooms[i]);
	}
}

Labyrinth::~Labyrinth() {
	for (int i = 0; i < m_tailleY*m_tailleX; ++i) {
		delete m_rooms[i];
	}
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
			m_rooms[position(x,y)]->print(top,center,bottom, godMode);
		}
		std::cout << top << std::endl << center << std::endl << bottom << std::endl;
	}
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

void Labyrinth::init(pos p) {
	m_rooms[position(p)]->setVisited();
	while (hasAdjacent(p)) {
		pos np = oneAdjacent(p); //choose the next salle
		openDoor(p,np);
		init(np);
	}
}

void Labyrinth::openDoor(pos p1, pos p2) {
	if (p1.x == p2.x && p1.y != p2.y) {
		if (p1.y > p2.y) {
			m_rooms[position(p1)]->setNorth(true);
			m_rooms[position(p2)]->setSouth(true);
		}
		else {
			m_rooms[position(p1)]->setSouth(true);
			m_rooms[position(p2)]->setNorth(true);
		}
	}
	else if (p1.x != p2.x && p1.y == p2.y) {
		if (p1.x > p2.x) {
			m_rooms[position(p1)]->setWest(true);
			m_rooms[position(p2)]->setEast(true);
		}
		else {
			m_rooms[position(p1)]->setEast(true);
			m_rooms[position(p2)]->setWest(true);
		}
	}
	// else not adjacent door.
}

bool Labyrinth::hasAdjacent(pos p) const {
	return !( m_rooms[position(p.x+1, p.y		)]->getVisited() 	&&
						m_rooms[position(p.x  , p.y+1	)]->getVisited()	&&
						m_rooms[position(p.x-1, p.y		)]->getVisited() 	&&
						m_rooms[position(p.x  , p.y-1	)]->getVisited()
					);
}

pos Labyrinth::oneAdjacent(pos p) const {
	pos np = p;
	int random = rand() % 4;
	do {
		switch (random) {
			case 1:
				if (!m_rooms[position(p.x-1, p.y)]->getVisited()) {
					np.x = np.x-1;
				}
				break;
			case 2:
				if (!m_rooms[position(p.x+1, p.y)]->getVisited()) {
					np.x = np.x+1;
				}
				break;
			case 3:
				if (!m_rooms[position(p.x, p.y-1)]->getVisited()) {
					np.y = np.y-1;
				}

				break;
			default:
				if (!m_rooms[position(p.x, p.y+1)]->getVisited()) {
					np.y = np.y+1;
				}

		}
		random = (random+1)%4;
	} while(np.x == p.x && np.y == p.y);
	return np;
}

bool Labyrinth::hasNorth() {
	return m_rooms[position(m_current)]->getNorth();
}

bool Labyrinth::hasEast() {
	return m_rooms[position(m_current)]->getEast();
}

bool Labyrinth::hasSouth() {
	return m_rooms[position(m_current)]->getSouth();
}

bool Labyrinth::hasWest() {
	return m_rooms[position(m_current)]->getWest();
}

void Labyrinth::goNorth() {
	if (hasNorth()) {
		m_precedent = m_current;
		m_current.y--;
		m_rooms[position(m_current)]->setVisited();
	}
}

void Labyrinth::goEast() {
	if (hasEast()) {
		m_precedent = m_current;
		m_current.x++;
		m_rooms[position(m_current)]->setVisited();
	}
}

void Labyrinth::goSouth() {
	if (hasSouth()) {
		m_precedent = m_current;
		m_current.y++;
		m_rooms[position(m_current)]->setVisited();
	}
}

void Labyrinth::goWest() {
	if (hasWest()) {
		m_precedent = m_current;
		m_current.x--;
		m_rooms[position(m_current)]->setVisited();
	}
}

bool Labyrinth::isEnd() {
	return m_rooms[position(m_current)]->isEnd();
}

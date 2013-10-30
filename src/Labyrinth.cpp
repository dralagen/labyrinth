#include "Labyrinth.hpp"

Labyrinth::Labyrinth(int x, int y) : m_tailleX(x), m_tailleY(y) {
	m_rooms = new Room[m_tailleX*m_tailleY];
	m_visited = new bool[m_tailleX*m_tailleY];

	srand(time(NULL));

	pos p = {.x = 0, .y = 0};
	init(p);
}

Labyrinth::~Labyrinth() {
	delete[] m_rooms;
	delete[] m_visited;
}

void Labyrinth::print() const {
	std::string top,bottom,center;

	for (int y = 0; y < m_tailleY; y++)
	{
		top="";
		center="";
		bottom="";
		for (int x = 0; x < m_tailleX; x++)
		{
			m_rooms[position(x,y)].top(top);
			m_rooms[position(x,y)].bottom(bottom);
			m_rooms[position(x,y)].center(center);
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
	m_visited[position(p)] = true;
	while (hasAdjacent(p)) {
		pos np = oneAdjacent(p); //choose the next salle
		openDoor(p,np);
		init(np);
	}
}

void Labyrinth::openDoor(pos p1, pos p2) {
	if (p1.x == p2.x) {
		if (p1.y > p2.y) {
			m_rooms[position(p1)].setNorth(true);
			m_rooms[position(p2)].setSouth(true);
		}
		else {
			m_rooms[position(p1)].setSouth(true);
			m_rooms[position(p2)].setNorth(true);
		}
	}
	else {
		if (p1.x > p2.x) {
			m_rooms[position(p1)].setWest(true);
			m_rooms[position(p2)].setEast(true);
		}
		else {
			m_rooms[position(p1)].setEast(true);
			m_rooms[position(p2)].setWest(true);
		}
	}
}

bool Labyrinth::hasAdjacent(pos p) const {
	return !( m_visited[position(p.x+1,p.y)] &&
					  m_visited[position(p.x,p.y+1)] &&
					  m_visited[position(p.x-1,p.y)] &&
					  m_visited[position(p.x, p.y)]
					);
}

pos Labyrinth::oneAdjacent(pos p) const {
	pos np = p;
	int random = rand() % 4;
	while(np.x == p.x && np.y == p.y) {
		switch (random) {
			case 1:
				if (!m_visited[position(p.x-1, p.y)]) {
					np.x = np.x-1;
				}
				break;
			case 2:
				if (!m_visited[position(p.x+1, p.y)]) {
					np.x = np.x+1;
				}
				break;
			case 3:
				if (!m_visited[position(p.x, p.y-1)]) {
					np.y = np.y-1;
				}

				break;
			default:
				if (!m_visited[position(p.x, p.y+1)]) {
					np.y = np.y+1;
				}

		}
		random=(random+1)%4;
	}

	return np;
}


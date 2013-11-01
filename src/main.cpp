#include <iostream>

#include "Labyrinth.hpp"
#include "Game.hpp"

using namespace std;

int main(int argc, char **argv)
{
	int tailleX, tailleY;

	cout << "Taille en abscisse : ";
	cin >> tailleX;
	cout << "Taille en ordonnée : ";
	cin >> tailleY;
	cout << endl;

	Game g(tailleX,tailleY);
	g.launch();

	return 0;
}


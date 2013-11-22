#include <iostream>

#include "Labyrinth.hpp"
#include "Game.hpp"

using namespace std;

int main(/*int argc, char **argv*/)
{
	int tailleX,tailleY;
	string name;
	cout << "Taille en Abscisse : ";
	cin >> tailleX;
	cout << "Taille en Ordonnée : ";
	cin >> tailleY;
	cout << "Nom du personnage : ";
	cin >> name;

	Game g(name, tailleX, tailleY);

	g.launch();

	return 0;
}


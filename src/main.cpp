#include <iostream>

#include "ColorTerm.hpp"

#include "Labyrinth.hpp"
#include "Game.hpp"

#include "TreasureEquip.hpp"

using namespace std;

int main(int argc, char **argv)
{
	int tailleX,tailleY;
	string name;

	ColorTerm::Edit blue(ColorTerm::FG_BLUE);
	ColorTerm::Edit reset(ColorTerm::FG_DEFAULT);

	cout << blue;
	if (argc == 3) {
		tailleX = stoi(argv[1]);
		tailleY = stoi(argv[2]);
		cout << "Nom du personnage : ";
		cin >> name;
	}
	else if (argc == 4) {
		tailleX = stoi(argv[1]);
		tailleY = stoi(argv[2]);
		name = argv[3];
	}
	else if (argc > 1) {
		cout << "Error arg : " << argv[0] << " Width Height [Name]" << endl;
		return 1;
	}
	else {
		cout << "Taille en Abscisse : ";
		cin >> tailleX;
		cout << "Taille en Ordonnée : ";
		cin >> tailleY;
		cout << "Nom du personnage : ";
		cin >> name;
	}
	cout << reset;
	Game g(name, tailleX, tailleY);

	g.launch();

	return 0;
}


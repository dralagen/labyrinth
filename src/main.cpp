#include <iostream>

#include "Labyrinth.hpp"

using namespace std;

int main(int argc, char **argv)
{
	int tailleX, tailleY;


	cout << "Taille en abscisse : ";
	cin >> tailleX;
	cout << "Taille en ordonnée : ";
	cin >> tailleY;
	cout << endl;


	Labyrinth laby(tailleX,tailleY);
	laby.print();

	return 0;
}


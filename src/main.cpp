#include <iostream>
#include <boost/lexical_cast.hpp>

#include "Labyrinth.hpp"
#include "Game.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Game *g;


#ifdef BOOST_LEXICAL_CAST_INCLUDED

	if (argc == 1) {
		g = new Game();
	}
	else if (argc == 3) {
		g = new Game(boost::lexical_cast<int>(argv[1]),boost::lexical_cast<int>(argv[2]));
	}
	else {
		cout << "Error arg : " << argv[0] << " Width Height" << endl;
	  return 1;
	}

#else

	int tailleX,tailleY;

	cout << "Taille en Abscisse : ";
	cin >> tailleX;
	cout << "Taille en Ordonnée : ";
	cin >> tailleY;

	g=new Game(tailleX, tailleY);

#endif


	g->launch();

	return 0;
}


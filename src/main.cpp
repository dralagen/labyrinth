#include <iostream>
#include <boost/lexical_cast.hpp>

#include "Labyrinth.hpp"
#include "Game.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Game *g;
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


	g->launch();

	return 0;
}


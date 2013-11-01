#ifndef GAME_HPP
#define GAME_HPP

#include "Labyrinth.hpp"

class Game
{
	public:
		Game (int x = LABYRINTH_TAILLE_X_DEFAULT, int y = LABYRINTH_TAILLE_Y_DEFAULT);
		Game (const Labyrinth &lab);
		//virtual ~Game ();

		void launch();

	private:
		Labyrinth m_labyrinth;

};

#endif /* GAME_HPP */


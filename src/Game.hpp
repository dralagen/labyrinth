#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <algorithm>

#include "Labyrinth.hpp"
#include "Personnage.hpp"

class Game
{
	public:
		Game (int x = LABYRINTH_TAILLE_X_DEFAULT,
					int y = LABYRINTH_TAILLE_Y_DEFAULT);
		//Game (const Labyrinth &lab);

		//virtual ~Game ();

		void launch();
		void chooseRoom();
		void end();
		void help();

		void fight();
		void treasure();

	private:
		Labyrinth m_labyrinth;
		Personnage m_perso;

};

#endif /* GAME_HPP */


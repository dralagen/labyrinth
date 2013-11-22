#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <algorithm>

#include "Labyrinth.hpp"
#include "Personnage.hpp"
#include "ItemFactory.hpp"
#include "Equipement.hpp"
#include "DEquipA.hpp"
#include "DEquipC.hpp"
#include "DEquipV.hpp"
#include "DEquipF.hpp"
#include "DArmeD.hpp"
#include "DArmeF.hpp"
#include "DArmeC.hpp"
#include "DArmeV.hpp"

class Game
{
	public:
		Game (int x = LABYRINTH_TAILLE_X_DEFAULT,
					int y = LABYRINTH_TAILLE_Y_DEFAULT);

		Game(std::string name,
				 int x = LABYRINTH_TAILLE_X_DEFAULT,
				 int y = LABYRINTH_TAILLE_Y_DEFAULT);

		void launch();
		void chooseRoom();
		void end();
		void help();


	private:
		Labyrinth m_labyrinth;
		Personnage m_perso;

};

#endif /* GAME_HPP */


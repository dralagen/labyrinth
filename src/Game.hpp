/**
 * \file Game.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

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

/**
 * \class Game Gère une partie
 *          manage un labyrinth avec un joueur
 */
class Game
{
	public:
		/**
		 * \brief constucteur
		 *
		 * \param name nom du personnage
		 * \param x lageur
		 * \param y hauteur
		 */
		Game(std::string name,
				 int x = LABYRINTH_TAILLE_X_DEFAULT,
				 int y = LABYRINTH_TAILLE_Y_DEFAULT);

		/**
		 * \brief Débute le déroulement d'une partie
		 */
		void launch();

		/**
		 * \brief Choisie une direction et execute l'action de la salle
		 */
		void chooseRoom();

		/**
		 * \brief Action de fin
		 *
		 */
		void end();

		/**
		 * \brief Affiche les commandes
		 */
		void help();


	private:
		Labyrinth m_labyrinth; ///< le labyrinthe
		Personnage m_perso; ///< le personnage
};

#endif /* GAME_HPP */


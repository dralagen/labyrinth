/**
 * \file StartRoom.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef STARTROOM_HPP
#define STARTROOM_HPP

#include "RoomComportement.hpp"

/**
 * \class StartRoom
 * \brief Salle de début du labyrinth
 */
class StartRoom : public RoomComportement
{
	public:
		StartRoom (int lvl = 0);
		virtual ~StartRoom();

		/**
		 * \brief Ne fait rien
		 *
		 * Sert a indiquer que cette salle est celle du départ
		 *
		 * \param p Personnage qui l'éxecute
		 *
		 * \return l'action realisé
		 */
		virtual int action(Personnage &perso);
};

#endif /* STARTROOM_HPP */


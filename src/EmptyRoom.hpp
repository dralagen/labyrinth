/**
 * \file EmptyRoom.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef EMPTYROOM_HPP
#define EMPTYROOM_HPP

#include "RoomComportement.hpp"

/**
 * \class EmptyRoom
 * \brief Salle vide
 *
 * l'action ne fait rien
 */
class EmptyRoom : public RoomComportement
{
	public:
		EmptyRoom (int lvl = 0);
		virtual ~EmptyRoom();

		/**
		 * \brief Redonne un petit peu de points de vie au joueur
		 *
		 * \param perso
		 *
		 * \return
		 */
		virtual int action(Personnage &perso);
};

#endif /* EMPTYROOM_HPP */


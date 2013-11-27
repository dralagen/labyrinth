/**
 * \file EndRoom.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 23/11/2013
 */
#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "RoomComportement.hpp"
#include "MonsterRoom.hpp"

/**
 * \class EndRoom
 * \brief Salle de fin du labyrinth
 */
class EndRoom : public RoomComportement
{
	public:
		EndRoom (int lvl = 10);
		virtual ~EndRoom();

		virtual bool isEnd() const;

		/**
		 * \brief Combat un boss puis fini le jeu
		 *
		 * La fin est obligatoire, soit le joueur tue le boss et gagne,
		 * soit il meurt et perd.
		 *
		 * \param perso Personnage qui l'éxecute
		 *
		 * \return l'action realisé
		 */
		virtual int action(Personnage &perso);

	private:
		MonsterRoom m_boss; ///< utilise un comportement MonsterRoom pour faire un combat
};

#endif /* ENDROOM_HPP */


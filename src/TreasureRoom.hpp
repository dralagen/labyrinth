/**
 * \file TreasureRoom.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef TREASUREROOM_HPP
#define TREASUREROOM_HPP

#include "RoomComportement.hpp"
#include "Treasure.hpp"

/**
 * \class TreasureRoom
 * \brief Salle contenant un trésor
 */
class TreasureRoom : public RoomComportement
{
	public:
		TreasureRoom (int lvl = 0);
		virtual ~TreasureRoom ();

		/**
		 * \brief Ouvre un coffre,
		 *  le Personnage peut reçoit un bonus aleatoire plus ou moins bien
		 *
		 * \param p Personnage qui l'éxecute
		 *
		 * \return l'action realisé
		 */
		virtual int action(Personnage &perso);
	private:
		Treasure *m_treasure; ///< le trésor de la salle
};

#endif /* TREASUREROOM_HPP */


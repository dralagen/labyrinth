/**
 * \file TreasureArme.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef TREASUREARME_HPP
#define TREASUREARME_HPP

#include "Treasure.hpp"


/**
 * \class TreasureArme
 * \brief Coffre de salle comportant une arme aléatoire
 */
class TreasureArme : public Treasure
{
	public:
		/**
		 * \brief Constructeur
		 *
		 * Construit un coffre contenant une arme de type Dague, Epee ou Hache avec un ou plusieurs bonus
		 *
		 * \param lvl niveau du coffre plus c'est grand mieux sera l'objet
		 */
		TreasureArme (int lvl = 0);
		virtual ~TreasureArme ();
		void open(Personnage &p);
};

#endif /* TREASUREARME_HPP */


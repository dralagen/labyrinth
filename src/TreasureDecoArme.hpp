/**
 * \file TreasureDecoArme.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef TREASUREDECOARME_HPP
#define TREASUREDECOARME_HPP

#include "Treasure.hpp"

/**
 * \class TreasureDecoArme
 * \brief Coffre de salle avec un ou des bonus d'arme aléatoire
 */
class TreasureDecoArme : public Treasure
{
	public:
	    /**
		 * \brief Constructeur
		 *
		 * Construit un coffre contenant une amelioration d'arme
		 *
		 * \param lvl niveau du coffre plus c'est grand mieux sera l'objet
		 */
		TreasureDecoArme (int lvl = 0);
		virtual ~TreasureDecoArme ();

		void open(Personnage &p);
};

#endif /* TREASUREDECOARME_HPP */


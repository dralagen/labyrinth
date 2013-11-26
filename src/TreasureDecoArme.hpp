#ifndef TREASUREDECOARME_HPP
#define TREASUREDECOARME_HPP

#include "Treasure.hpp"

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


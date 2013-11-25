#ifndef TREASUREDECOARME_HPP
#define TREASUREDECOARME_HPP

#include "Treasure.hpp"

class TreasureDecoArme : public Treasure
{
	public:
		TreasureDecoArme (int lvl = 0);
		virtual ~TreasureDecoArme ();

		void open(Personnage &p);
};

#endif /* TREASUREDECOARME_HPP */


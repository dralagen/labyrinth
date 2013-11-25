#ifndef TREASUREDECOEQUIP_HPP
#define TREASUREDECOEQUIP_HPP

#include "Treasure.hpp"

class TreasureDecoEquip : public Treasure
{
	public:
		TreasureDecoEquip (int lvl = 0);
		virtual ~TreasureDecoEquip ();

		void open(Personnage &p);
};

#endif /* TREASUREDECOEQUIP_HPP */


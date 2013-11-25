#ifndef TREASUREEQUIP_HPP
#define TREASUREEQUIP_HPP

#include "Treasure.hpp"
#include "Equipement.hpp"
#include "ItemFactory.hpp"

class TreasureEquip : public Treasure
{
	public:
		TreasureEquip(int lvl = 0);
		virtual ~TreasureEquip();
		void open(Personnage &p);

	private:
		Equipement *m_e;
};

#endif /* TREASUREEQUIP_HPP */


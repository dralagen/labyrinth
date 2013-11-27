/**
 * \file TreasureDecoEquip.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef TREASUREDECOEQUIP_HPP
#define TREASUREDECOEQUIP_HPP

#include "Treasure.hpp"

/**
 * \class TreasureDecoEquip
 * \brief Coffre de salle contenant une ou des amélioration(s) pour un équipement
 */
class TreasureDecoEquip : public Treasure
{
	public:
		TreasureDecoEquip (int lvl = 0);
		virtual ~TreasureDecoEquip ();

		void open(Personnage &p);
};

#endif /* TREASUREDECOEQUIP_HPP */


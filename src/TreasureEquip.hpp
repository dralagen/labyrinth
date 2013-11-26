#ifndef TREASUREEQUIP_HPP
#define TREASUREEQUIP_HPP

#include "Treasure.hpp"
#include "Equipement.hpp"
#include "ItemFactory.hpp"

class TreasureEquip : public Treasure
{
	public:
	    /**
		 * \brief Constructeur
		 *
		 * Construit un coffre contenant un equipement de type Casque , Torse ou Jambe avec un ou plusieurs bonus
		 *
		 * \param lvl niveau du coffre plus c'est grand mieux sera l'objet
		 */
		TreasureEquip(int lvl = 0);
		virtual ~TreasureEquip();
		void open(Personnage &p);
};

#endif /* TREASUREEQUIP_HPP */


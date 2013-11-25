#ifndef TREASUREARME_HPP
#define TREASUREARME_HPP

#include "Treasure.hpp"

class TreasureArme : public Treasure
{
	public:
		TreasureArme (int lvl = 0);
		virtual ~TreasureArme ();
		void open(Personnage &p);
	private:
		Arme *m_a;
};

#endif /* TREASUREARME_HPP */


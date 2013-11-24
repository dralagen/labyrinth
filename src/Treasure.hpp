#ifndef TREASURE_HPP
#define TREASURE_HPP

#include "Personnage.hpp"

class Treasure
{
	public:
		virtual ~Treasure ();
		virtual void open(Personnage &p) = 0;

	protected:
		ItemFactory* getFactory(int i);

};

#endif /* TREASURE_HPP */


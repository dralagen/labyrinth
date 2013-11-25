#include "Treasure.hpp"

Treasure::Treasure(int lvl): m_lvl(lvl) {
}

Treasure::~Treasure() {}

ItemFactory* Treasure::getFactory(int i) {
	switch (i%3) {
		case 1:
		  return ItemFactory::CreateFactory(FORCEF);
			break;
		case 2:
			return ItemFactory::CreateFactory(CHANCEF);
		default:
			return ItemFactory::CreateFactory(VIEF);
	}
}

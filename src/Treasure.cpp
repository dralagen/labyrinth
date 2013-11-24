#include "Treasure.hpp"

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

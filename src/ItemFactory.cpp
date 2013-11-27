/**
 * \file ItemFactory.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "ItemFactory.hpp"

ItemFactory* ItemFactory::CreateFactory(ITEM_FACTORIES factory)
{
	if(factory == FORCEF)
	{
		return new ForceFactory();
	}
	else if(factory == VIEF)
	{
		return new VieFactory();
	}
	else/* if (factory == CHANCEF)*/
	{
		return new ChanceFactory();
	}

}


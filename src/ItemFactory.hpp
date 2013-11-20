#ifndef ITEMFACTORY_HPP
#define ITEMFACTORY_HPP

#include "Casque.hpp"
#include "Conso.hpp"
#include "Dague.hpp"
#include "Epee.hpp"
#include "Hache.hpp"
#include "Jambe.hpp"
#include "Torse.hpp"

		enum ITEM_FACTORIES
		{
			FORCEF,
			VIEF,
			CHANCEF
		};

class ItemFactory
{
	public:
		virtual Casque* GetCasque() = 0;
		virtual Torse* GetTorse() = 0;
		virtual Jambe* GetJambe() = 0;
		virtual Conso* GetConso() = 0;
		virtual Epee* GetEpee() = 0;
		virtual Dague* GetDague() = 0;
		virtual Hache* GetHache() = 0;

		static ItemFactory* CreateFactory(ITEM_FACTORIES factory);
};

#include "ForceFactory.hpp"
#include "VieFactory.hpp"
#include "ChanceFactory.hpp"

#endif /* ITEMFACTORY_HPP */

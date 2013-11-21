#ifndef CHANCEFACTORY_HPP
#define CHANCEFACTORY_HPP

#include "ItemFactory.hpp"
#include "CasqueChance.hpp"
#include "ConsoChance.hpp"
#include "DagueChance.hpp"
#include "EpeeChance.hpp"
#include "HacheChance.hpp"
#include "JambeChance.hpp"
#include "TorseChance.hpp"
class ChanceFactory : public ItemFactory
{
	public:
		Casque* GetCasque();
		Torse* GetTorse();
		Jambe* GetJambe();
		Conso* GetConso();
		Epee* GetEpee();
		Dague* GetDague();
		Hache* GetHache();

};
#endif /* CHANCEFACTORY_HPP */

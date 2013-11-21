#ifndef VIEFACTORY_HPP
#define VIEFACTORY_HPP

#include "ItemFactory.hpp"
#include "CasqueVie.hpp"
#include "ConsoVie.hpp"
#include "DagueVie.hpp"
#include "EpeeVie.hpp"
#include "HacheVie.hpp"
#include "JambeVie.hpp"
#include "TorseVie.hpp"


class VieFactory : public ItemFactory
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

#endif /* VIEFACTORY_HPP */

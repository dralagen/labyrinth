#ifndef FORCEFACTORY_HPP
#define FORCEFACTORY_HPP


#include "ItemFactory.hpp"
#include "CasqueForce.hpp"
#include "ConsoForce.hpp"
#include "DagueForce.hpp"
#include "EpeeForce.hpp"
#include "HacheForce.hpp"
#include "JambeForce.hpp"
#include "TorseForce.hpp"

class ForceFactory : public ItemFactory
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
#endif /* FORCEFACTORY_HPP */

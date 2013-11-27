/**
 * \file ChanceFactory.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef CHANCEFACTORY_HPP
#define CHANCEFACTORY_HPP

#include "ItemFactory.hpp"
#include "CasqueChance.hpp"
#include "DagueChance.hpp"
#include "EpeeChance.hpp"
#include "HacheChance.hpp"
#include "JambeChance.hpp"
#include "TorseChance.hpp"
/**
 * \class ChanceFactory
 * \brief Factory concrete pour creer des objets de type Chance
 */
class ChanceFactory : public ItemFactory
{
	public:
		Casque* GetCasque();
		Torse* GetTorse();
		Jambe* GetJambe();
		Epee* GetEpee();
		Dague* GetDague();
		Hache* GetHache();

};
#endif /* CHANCEFACTORY_HPP */

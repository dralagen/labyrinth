/**
 * \file ChanceFactory.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "ChanceFactory.hpp"

Casque* ChanceFactory::GetCasque()
{
	return new CasqueChance();
}

Torse* ChanceFactory::GetTorse()
{
	return new TorseChance();
}

Jambe* ChanceFactory::GetJambe()
{
	return new JambeChance();
}

Epee* ChanceFactory::GetEpee()
{
	return new EpeeChance();
}

Dague* ChanceFactory::GetDague()
{
	return new DagueChance();
}

Hache* ChanceFactory::GetHache()
{
	return new HacheChance();
}


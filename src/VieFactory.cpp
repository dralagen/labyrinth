/**
 * \file VieFactory.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#include "VieFactory.hpp"

Casque* VieFactory::GetCasque()
{
	return new CasqueVie();
}

Torse* VieFactory::GetTorse()
{
	return new TorseVie();
}

Jambe* VieFactory::GetJambe()
{
	return new JambeVie();
}

Epee* VieFactory::GetEpee()
{
	return new EpeeVie();
}

Dague* VieFactory::GetDague()
{
	return new DagueVie();
}

Hache* VieFactory::GetHache()
{
	return new HacheVie();
}


/**
 * \file ForceFactory.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "ForceFactory.hpp"

Casque* ForceFactory::GetCasque()
{
	return new CasqueForce();
}

Torse* ForceFactory::GetTorse()
{
	return new TorseForce();
}

Jambe* ForceFactory::GetJambe()
{
	return new JambeForce();
}

Epee* ForceFactory::GetEpee()
{
	return new EpeeForce();
}

Dague* ForceFactory::GetDague()
{
	return new DagueForce();
}

Hache* ForceFactory::GetHache()
{
	return new HacheForce();
}


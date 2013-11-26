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


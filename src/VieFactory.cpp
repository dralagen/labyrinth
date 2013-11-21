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

Conso* VieFactory::GetConso()
{
	return new ConsoVie();
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


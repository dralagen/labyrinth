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

Conso* ChanceFactory::GetConso()
{
	return new ConsoChance();
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


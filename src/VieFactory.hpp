/**
 * \file VieFactory.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef VIEFACTORY_HPP
#define VIEFACTORY_HPP

#include "ItemFactory.hpp"
#include "CasqueVie.hpp"
#include "DagueVie.hpp"
#include "EpeeVie.hpp"
#include "HacheVie.hpp"
#include "JambeVie.hpp"
#include "TorseVie.hpp"

/**
 * \class VieFactory
 * \brief Factory concrete pour creer des objets de type Vie
 */
class VieFactory : public ItemFactory
{
	public:
		Casque* GetCasque();
		Torse* GetTorse();
		Jambe* GetJambe();
		Epee* GetEpee();
		Dague* GetDague();
		Hache* GetHache();

};

#endif /* VIEFACTORY_HPP */

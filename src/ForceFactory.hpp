/**
 * \file ForceFactory.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef FORCEFACTORY_HPP
#define FORCEFACTORY_HPP


#include "ItemFactory.hpp"
#include "CasqueForce.hpp"
#include "DagueForce.hpp"
#include "EpeeForce.hpp"
#include "HacheForce.hpp"
#include "JambeForce.hpp"
#include "TorseForce.hpp"
/**
 * \class ForceFactory
 * \brief Factory concrete pour creer des objets de type Force
 */
class ForceFactory : public ItemFactory
{
	public:
		Casque* GetCasque();
		Torse* GetTorse();
		Jambe* GetJambe();
		Epee* GetEpee();
		Dague* GetDague();
		Hache* GetHache();

};
#endif /* FORCEFACTORY_HPP */

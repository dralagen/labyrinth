/**
 * \file HacheChance.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef HACHECHANCE_HPP
#define HACHECHANCE_HPP
#include "Hache.hpp"
#include <string>
/**
 * \class HacheChance
 * \brief HacheChance herite de Hache
 */
class HacheChance : public Hache
{
	public:
		HacheChance();
		~HacheChance();
		std::string getNom();
		int getBforce();
		int getBvie();
		int getBchance();
		int getDegat();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setDegat(int degat);
		void setNom(std::string nom);
};



#endif /* HacheChance.hpp */

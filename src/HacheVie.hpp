/**
 * \file HacheVie.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef HACHEVIE_HPP
#define HACHEVIE_HPP
#include "Hache.hpp"
#include <string>
/**
 * \class HacheVie
 * \brief HacheVie herite de Hache
 */
class HacheVie : public Hache
{
	public:
		HacheVie();
		~HacheVie();
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



#endif /* HacheVie.hpp */

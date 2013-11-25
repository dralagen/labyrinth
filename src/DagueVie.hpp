/**
 * \file DagueVie.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DAGUEVIE_HPP
#define DAGUEVIE_HPP
#include "Dague.hpp"
#include <string>
/**
 * \class DagueVie
 * \brief DagueVie herite de Dague
 */
class DagueVie : public Dague
{
	public:
		DagueVie();
		~DagueVie();
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



#endif /* DagueVie.hpp */

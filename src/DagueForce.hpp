/**
 * \file DagueForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DAGUEFORCE_HPP
#define DAGUEFORCE_HPP
#include "Dague.hpp"
#include <string>
/**
 * \class DagueForce
 * \brief DagueForce herite de Dague
 */
class DagueForce : public Dague
{
	private:
		std::string nom_;
		int degat_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		DagueForce();
		~DagueForce();
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



#endif /* DagueForce.hpp */

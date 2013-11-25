/**
 * \file HacheForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef HACHEFORCE_HPP
#define HACHEFORCE_HPP
#include "Hache.hpp"
#include <string>
/**
 * \class HacheForce
 * \brief HacheForce herite de Hache
 */
class HacheForce : public Hache
{
	private:
		std::string nom_;
		int degat_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		HacheForce();
		~HacheForce();
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



#endif /* HacheForce.hpp */

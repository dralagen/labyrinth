/**
 * \file EpeeForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef EPEEFORCE_HPP
#define EPEEFORCE_HPP
#include "Epee.hpp"
#include <string>
/**
 * \class EpeeForce
 * \brief EpeeForce herite de Epee
 */
class EpeeForce : public Epee
{
	public:
		EpeeForce();
		~EpeeForce();
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



#endif /* EpeeForce.hpp */

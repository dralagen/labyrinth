/**
 * \file JambeForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef JAMBEFORCE_HPP
#define JAMBEFORCE_HPP
#include "Jambe.hpp"
#include <string>
/**
 * \class JambeForce
 * \brief JambeForce herite de Jambe
 */
class JambeForce : public Jambe
{
	private:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		JambeForce();
		std::string getNom();
		int getBforce();
		int getBvie();
		int getBchance();
		int getArmure();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setArmure(int armure);
		void setNom(std::string nom);
};



#endif /* JambeForce.hpp */

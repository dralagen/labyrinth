/**
 * \file JambeVie.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef JAMBEVIE_HPP
#define JAMBEVIE_HPP
#include "Jambe.hpp"
#include <string>
/**
 * \class JambeVie
 * \brief JambeVie herite de Jambe
 */
class JambeVie : public Jambe
{
	private:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		JambeVie();
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



#endif /* JambeVie.hpp */

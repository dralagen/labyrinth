/**
 * \file TorseForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef TORSEFORCE_HPP
#define TORSEFORCE_HPP
#include "Torse.hpp"
#include <string>
/**
 * \class TorseForce
 * \brief TorseForce herite de Torse
 */
class TorseForce : public Torse
{
	private:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		TorseForce();
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



#endif /* TorseForce.hpp */

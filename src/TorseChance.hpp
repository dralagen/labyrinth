/**
 * \file TorseChance.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef TORSECHANCE_HPP
#define TORSECHANCE_HPP
#include "Torse.hpp"
#include <string>
/**
 * \class TorseChance
 * \brief TorseChance herite de Torse
 */
class TorseChance : public Torse
{
	private:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		TorseChance();
		//virtual ~TorseChance();
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



#endif /* TorseChance.hpp */

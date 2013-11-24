#ifndef DEQUIPA_HPP
#define DEQUIPA_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DEquip.hpp"

class DEquipA : public DEquip
{
	public:
		DEquipA(Equipement * e);
		~DEquipA();
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


#endif /* DEquipA.hpp */

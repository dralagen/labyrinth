#ifndef DEQUIPV_HPP
#define DEQUIPV_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DEquip.hpp"

class DEquipV : public DEquip
{
	public:
		DEquipV(Equipement * e);
		~DEquipV();
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


#endif /* DEquipV.hpp */

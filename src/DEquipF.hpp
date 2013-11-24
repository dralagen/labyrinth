#ifndef DEQUIPF_HPP
#define DEQUIPF_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DEquip.hpp"

class DEquipF : public DEquip
{
	public:
		DEquipF(Equipement * e);
		~DEquipF();
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


#endif /* DEquipF.hpp */

#ifndef DEQUIPC_HPP
#define DEQUIPC_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DEquip.hpp"

class DEquipC : public DEquip
{
	public:
		DEquipC(Equipement * e);
		~DEquipC();
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


#endif /* DEquipC.hpp */

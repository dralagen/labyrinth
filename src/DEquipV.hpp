#ifndef DEQUIPV_HPP
#define DEQUIPV_HPP
#include "Equipement.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DEquipV : public Equipement
{

	private:
		Equipement * e_;
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
		int type();
};


#endif /* DEquipV.hpp */

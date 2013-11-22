#ifndef DEQUIPF_HPP
#define DEQUIPF_HPP
#include "Equipement.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DEquipF : public Equipement
{

	private:
		Equipement * e_;
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
		int type();
};


#endif /* DEquipF.hpp */

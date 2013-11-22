#ifndef DEQUIPC_HPP
#define DEQUIPC_HPP
#include "Equipement.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DEquipC : public Equipement
{

	private:
		Equipement * e_;
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
		int type();
};


#endif /* DEquipC.hpp */

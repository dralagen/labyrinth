#ifndef DEQUIP_HPP
#define DEQUIP_HPP

#include "Equipement.hpp"

class DEquip : public Equipement
{
	protected:
		Equipement * e_;
	public:
		~DEquip();
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

#endif /* DEQUIP_HPP */


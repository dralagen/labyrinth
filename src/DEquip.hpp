#ifndef DEQUIP_HPP
#define DEQUIP_HPP

#include "Equipement.hpp"

class DEquip : public Equipement
{
	protected:
		Equipement * e_;
	public:
		DEquip(Equipement *e);
		~DEquip();
		int getBforce();
		int getBvie();
		int getBchance();
		int getArmure();
		int type();

		std::string replace(std::string str);
};

#endif /* DEQUIP_HPP */


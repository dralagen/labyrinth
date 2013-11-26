#ifndef DEQUIPF_HPP
#define DEQUIPF_HPP

#include "DEquip.hpp"

class DEquipF : public DEquip
{
	public:
		DEquipF(Equipement * e);
		~DEquipF();

		std::string getNom();
};

#endif /* DEquipF.hpp */


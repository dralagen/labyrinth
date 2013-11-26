#ifndef DEQUIPV_HPP
#define DEQUIPV_HPP

#include "DEquip.hpp"

class DEquipV : public DEquip
{
	public:
		DEquipV(Equipement * e);
		~DEquipV();

		std::string getNom();
};

#endif /* DEquipV.hpp */


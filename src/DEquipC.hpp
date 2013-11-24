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
};


#endif /* DEquipC.hpp */

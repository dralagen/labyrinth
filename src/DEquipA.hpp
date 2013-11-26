#ifndef DEQUIPA_HPP
#define DEQUIPA_HPP

#include "DEquip.hpp"

class DEquipA : public DEquip
{
	public:
		DEquipA(Equipement * e);
		~DEquipA();
		std::string getNom();
};

#endif /* DEquipA.hpp */


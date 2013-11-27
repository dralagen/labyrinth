/**
 * \file DequipF.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DEQUIPF_HPP
#define DEQUIPF_HPP

#include "DEquip.hpp"
/**
*\class DEquipF
*\brief Decorator d'équipement de force , hérite de DEquip
**/
class DEquipF : public DEquip
{
	public:
		DEquipF(Equipement * e);
		~DEquipF();
};

#endif /* DEquipF.hpp */


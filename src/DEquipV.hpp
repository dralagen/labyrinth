/**
 * \file DequipV.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DEQUIPV_HPP
#define DEQUIPV_HPP

#include "DEquip.hpp"
/**
*\class DEquipV
*\brief Decorator d'équipement de vie , hérite de DEquip
**/
class DEquipV : public DEquip
{
	public:
		DEquipV(Equipement * e);
		~DEquipV();
};

#endif /* DEquipV.hpp */


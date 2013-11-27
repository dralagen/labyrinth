/**
 * \file DequipC.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DEQUIPC_HPP
#define DEQUIPC_HPP

#include "DEquip.hpp"
/**
*\class DEquipC
*\brief Decorator d'équipement de chance , hérite de DEquip
**/
class DEquipC : public DEquip
{
	public:
		DEquipC(Equipement * e);
		~DEquipC();
};

#endif /* DEquipC.hpp */


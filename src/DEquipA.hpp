/**
 * \file DequipA.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DEQUIPA_HPP
#define DEQUIPA_HPP

#include "DEquip.hpp"
/**
*\class DEquipA
*\brief Decorator d'équipement d'armure , hérite de DEquip
**/
class DEquipA : public DEquip
{
	public:
		DEquipA(Equipement * e);
		~DEquipA();
};

#endif /* DEquipA.hpp */


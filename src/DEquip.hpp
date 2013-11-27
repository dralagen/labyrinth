/**
 * \file Dequip.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DEQUIP_HPP
#define DEQUIP_HPP

#include "Equipement.hpp"
/**
*\class DEquip
*\brief Decorator d'équipement , hérite de Equipement
**/
class DEquip : public Equipement
{
	protected:
		Equipement * e_;    ///< Equipement e pour la décoration
		/**
		*\brief Retourne le nom de l'équipement modifié
		*\param Chaine de caractère à ajouter
		*\return nom nom modifié
		*/
		std::string replace(std::string str);
	public:
	    /**
	    *\brief Constructeur du décorator d'Equipement
	    */
		DEquip(Equipement *e);
		~DEquip();
		/**
		*\brief Renvoie le bonus de force
		*\return bforce Bonus de force
		**/
		int getBforce();
		/**
		*\brief Renvoie le bonus de vie
		*\return bvie Bonus de vie
		**/
		int getBvie();
		/**
		*\brief Renvoie le bonus de chance
		*\return bchance Bonus de chance
		**/
		int getBchance();
		/**
		*\brief Renvoie le bonus d'armure
		*\return armure Bonus d'armure
		*/
		int getArmure();
		/**
		*\brief Renvoie le type de l'Equipement
		*\return entier type de l'Equipement
		*/
		int type();


};

#endif /* DEQUIP_HPP */


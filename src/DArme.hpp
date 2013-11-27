/**
 * \file DArme.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DARME_HPP
#define DARME_HPP

#include <iostream>
#include <sstream>

#include "Arme.hpp"
/**
*\class DArme
*\brief Decorator d'arme, hérite de Arme
**/
class DArme : public Arme
{
	protected:
		Arme * e_;                              ///< Arme pour les decorations
		/**
		*\brief Retourne le nom de l'arme modifié
		*\param Chaine de caractère à ajouter
		*\return nom nom modifié
		*/
		std::string replace(std::string str);

	public:
	    /**
	    *\brief Constructeur du Decorator d'arme
	    **/
		DArme(Arme *e);
		virtual ~DArme();
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
		*\brief Renvoie les dégâts
		*\return degat Dégâts
		**/
		int getDegat();
};

#endif /* DARME_HPP */


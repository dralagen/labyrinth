/**
 * \file Arme.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef ARME_HPP
#define ARME_HPP

#include <string>

/**
 * \class Arme
 * \brief Gestion des armes
 */
class Arme
{
	protected:
		std::string nom_;       ///< Nom de l'arme
		int         degat_;     ///< Bonus de dégat
		int         bchance_;   ///< Bonus de chance
		int         bvie_;      ///< Bonus de vie
		int         bforce_;    ///< Bonus de force
	public :
		Arme();
		virtual ~Arme();

		/**
		 *\brief Retourne le nom de l'arme
		 * \return Nom
		 * */
		virtual std::string getNom();

		/**
		 *\brief Retourne le bonus de force
		 * \return Bforce
		 * */
		virtual int getBforce();

		/**
		 *\brief Retourne le bonus de vie
		 * \return Bvie
		 * */
		virtual int getBvie();

		/**
		 *\brief Retourne le bonus de chance
		 * \return Bchance
		 * */
		virtual int getBchance();

		/**
		 *\brief Retourne les degats de l'arme
		 * \return degats
		 * */
		virtual int getDegat();

};

#endif /* Arme.hpp */


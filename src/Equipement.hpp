/**
 * \file Equipement.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP

#include <string>

#define EQCASQUE 1
#define EQTORSE 2
#define EQJAMBE 3
#define EQBONUS 4

/**
 * \class Equipement
 * \brief Gestion des equipements
 */
class Equipement
{
	protected:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;

	public :
		Equipement();
		virtual ~Equipement();

		/**
		 *\brief Retourne le nom de l'equipement
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
		 * \brief Retourne l'armure fournie par l'equipement
		 * \return armure
		 * */
		virtual int getArmure();

		/**
		 * \brief Renvoie le type de l'equipement
		 * \return int
		 * */
		virtual int type() = 0;
};
#endif /* Equipement.hpp */


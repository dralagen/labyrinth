/**
 * \file Arme.hpp
 *
 * \author Dralagen
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
		virtual ~Arme() {}
		/**
		 *\brief Retourne le nom de l'arme
		 * \return Nom
		 * */
		virtual std::string getNom()=0;
		/**
		 *\brief Retourne le bonus de force
		 * \return Bforce
		 * */
		virtual int getBforce()=0;
		/**
		 *\brief Retourne le bonus de vie
		 * \return Bvie
		 * */
		virtual int getBvie()=0;
		/**
		 *\brief Retourne le bonus de chance
		 * \return Bchance
		 * */
		virtual int getBchance()=0;
		/**
		 *\brief Retourne les degats de l'arme
		 * \return degats
		 * */
		 virtual int getDegat()=0;
		/**
		 * \brief Change le bonus de force
		 * \param bforce Bonus de force
		 * */
		virtual void setBforce(int bforce)=0;
		/**
		 * \brief Change le bonus de vie
		 * \param bvie Bonus de vie
		 * */
		virtual void setBvie(int bvie)=0;
		/**
		 * \brief Change le bonus de chance
		 * \param bchance Bonus de chance
		 * */
		virtual void setBchance(int bchance)=0;
		/**
		 * \brief Change les degats
		 * \param degat Degats
		 * */
		virtual void setDegat(int degat)=0;
		/**
		 * \brief Change le nom de l'arme
		 * \param nom nouveau nom
		 * */
		virtual void setNom(std::string nom)=0;
};
#endif /* Arme.hpp */

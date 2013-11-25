/**
 * \file Equipement.hpp
 *
 * \author Dralagen
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
	public :
		virtual ~Equipement() {}
		/**
		 *\brief Retourne le nom de l'equipement
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
		 * \brief Retourne l'armure fournie par l'equipement
		 * \return armure
		 * */
		virtual int getArmure()=0;
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
		 * \brief Change l'armure fournie par l'equipement
		 * \param armure nouvelle valeur d'armure
		 * */
		virtual void setArmure(int armure)=0;
		/**
		 * \brief Change le nom de l'equipement
		 * \param nom Nouveau nom
		 * */
		virtual void setNom(std::string nom)=0;
		/**
		 * \brief Renvoie le type de l'equipement
		 * \return int
		 * */
		virtual int type() = 0;
};
#endif /* Equipement.hpp */

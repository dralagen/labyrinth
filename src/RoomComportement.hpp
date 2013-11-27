/**
 * \file RoomComportement.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef ROOMCOMPORTEMENT_HPP
#define ROOMCOMPORTEMENT_HPP

#include <string>
#include <iostream>

#include "Personnage.hpp"

#define RC_NOTHING 0
#define RC_OPEN_TREASURE  1
#define RC_CLEAN_MONSTER  2
#define RC_UNDO -1

/**
 * \class RoomComportement
 * \brief Génère le comportement des salles
 */
class RoomComportement
{
	public:
		/**
		 * \brief Constructeur
		 *
		 * \param lvl niveau de la salle
		 */
		RoomComportement (int lvl = 10);
		/**
		 * \brief Destructeur
		 */
		virtual ~RoomComportement();

		/**
		 * \brief Execute l'action du comportement
		 *
		 * \param p Personnage qui l'éxecute
		 *
		 * \return l'action realisé
		 */
		virtual int action(Personnage &p) = 0;
		/**
		 * \brief Vérifie la fin
		 *
		 * \return vrais si on est sur la salle de fin
		 */
		virtual bool isEnd() const;

		/**
		 * \brief Récupère le niveau ou force de la salle
		 *
		 * \return le niveau
		 */
		int getLvl();

		/**
		 * \brief Récupère le contenue de la salle
		 *
		 * \return contenue de la salle
		 */
		std::string getContent();
	protected:
		std::string m_content;   ///< Valeur du contenue a afficher
		int         m_lvl;       ///< stock le niveau de la salle

};

#endif /* ROOMCOMPORTEMENT_HPP */


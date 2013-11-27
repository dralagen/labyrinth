/**
 * \file Treasure.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 25/11/2013
 */

#ifndef TREASURE_HPP
#define TREASURE_HPP

#include "Personnage.hpp"

/**
 * \class Treasure
 * \brief Coffre de salle
 *
 * classe de gestion de coffre peut contenir des équipements ou des armes
 */
class Treasure
{
	public:
		Treasure(int lvl = 0);
		/**
		 * \brief Destructeur
		 */
		virtual ~Treasure ();

		/**
		 * \brief ouvre le coffre pour le Personnage
		 *
		 * Ajout l'objet au personnage, le Personnage demande s'il veut l'équipé ou non
		 *
		 * \param p Personnage qui ouvre le coffre
		 */
		virtual void open(Personnage &p) = 0;

	protected:
	    /**
		 * \brief Creer une factory de Chance , Vie ou Force aléatoirement
		 * \return factory Factory concrète de chance,vie ou force
		 */
		ItemFactory* getFactory(int i);

		int m_lvl; ///< niveau du coffre;

};

#endif /* TREASURE_HPP */


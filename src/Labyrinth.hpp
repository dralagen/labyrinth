/**
 * \file Labyrinth.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include "Room.hpp"
#include "Personnage.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>


#define LABYRINTH_TAILLE_X_DEFAULT 8
#define LABYRINTH_TAILLE_Y_DEFAULT 8


/**
 * \struct position utilise des coordonnée pour stocker une position
 *
 */
struct pos {
	int x, ///< coordonnée abscisse
		 	y; ///< coordonnée ordonnée
};

/**
 * \class Labyrinth
 * \brief gestion de labyrinthe
 */
class Labyrinth
{
	public:
		/**
		 * \brief constucteur
		 *
		 * \param x lageur
		 * \param y hauteur
		 */
		Labyrinth(int x = LABYRINTH_TAILLE_X_DEFAULT,
							int y = LABYRINTH_TAILLE_Y_DEFAULT);

		/**
		 * \brief destructeur
		 */
		~Labyrinth();

		/**
		 * \brief surchage opérateur =
		 *
		 * \param lab
		 *
		 * \return un labyrinthe identique
		 */
		Labyrinth& operator=(const Labyrinth &lab);

		/**
		 * \brief Affiche le labyrinthe
		 *
		 * \param godMode true affiche le contenue des salles même non visité
		 */
		void print(bool godMode = false) const;
		/**
		 * \brief Actionne la salle courante
		 *
		 * \param perso personnage qui ouvre la salle
		 */
		void action(Personnage &perso);

		/**
		 * \brief Verifie si il y a une porte au nord
		 *
		 * \return vrai si c'est une porte
		 *         faux si c'est un mur
		 */
		bool hasNorth() const;
		/**
		 * \brief Verifie si il y a une porte a l'est
		 *
		 * \return vrai si c'est une porte
		 *         faux si c'est un mur
		 */
		bool hasEast() const;
		/**
		 * \brief Verifie si il y a une porte au sud
		 *
		 * \return vrai si c'est une porte
		 *         faux si c'est un mur
		 */
		bool hasSouth() const;
		/**
		 * \brief Verifie si il y a une porte a l'ouest
		 *
		 * \return vrai si c'est une porte
		 *         faux si c'est un mur
		 */
		bool hasWest() const;

		/**
		 * \brief va au nord
		 */
		void goNorth();
		/**
		 * \brief va a l'est
		 */
		void goEast();
		/**
		 * \brief va au sud
		 */
		void goSouth();
		/**
		 * \brief va a l'ouest
		 */
		void goWest();

		/**
		 * \brief Vérifie la fin
		 *
		 * \return vrai si on est sur la salle de fin
		 */
		bool isEnd() const;
		/**
		 * \brief la salle a été vidé
		 */
		void clean();
		/**
		 * \brief génére qu'une fois le labyrinth
		 */
		void gen();
		/**
		 * \brief retourne a la position précédente
		 *         position courante == position précédente
		 */
		void undo();

		/**
		 * \brief définie la salle de départ si le labyrinth n'a pas été généré
		 *
		 * \param p position de départ
		 */
		void setStart(pos p);
		/**
		 * \brief
		 *
		 * \param x position en abscisse
		 * \param y position en ordonnée
		 */
		void setStart(int x, int y);
	private:
		const int m_tailleX,   ///< largeur du labyrinthe
					    m_tailleY;   ///< hauteur du labyrinthe
		pos       m_current;   ///< position courante
		pos       m_precedent; ///< position précédente
		Room     *m_rooms;     ///< liste des salles du labyrinthe
		bool      m_gen;       ///< labyrinthe généré

		/**
		 * \brief Calcule la position de la salle dans le tableau
		 *
		 * \param x Abscisse
		 * \param y Ordonnée
		 *
		 * \return indice dans le tableau m_rooms
		 */
		int position(int x, int y) const;
		/**
		 * \brief Calcule la position de la salle dans le tableau
		 *
		 * \param p position par rapport à X et Y
		 *
		 * \return indice dans le tableau m_rooms
		 */
		int position(pos p) const;

		/**
		 * \brief actualise ma position courante
		 */
		void newPosition();
		/**
		 * \brief Génère le labyrinthe
		 */
		void _gen();

		/**
		 * \brief Ouvre les chemins a partir de la position p
		 *
		 * \param p position de départ
		 */
		void init(pos p);
		/**
		 * \brief Créer une porte entre la salle s1 et s2
		 *          s1 et s2 adjacent
		 * \param p1 position de la salle s1
		 * \param p2 position de la salle s2
		 */
		void openDoor(pos p1, pos p2);
		/**
		 * \brief cherche une salle adjacente non visité
		 *
		 * \param p position de recherche
		 *
		 * \return vrai si une des quatres salle n'as pas était visité
		 */
		bool hasAdjacent(pos p) const; // has an adjacent not visited
		/**
		 * \brief prend une salle adjacente
		 *
		 * \param p position de recherche
		 *
		 * \return position d'une des salle adjacente non visité
		 */
		pos oneAdjacent(pos p) const; // one adjacent not visited
};

#endif // LABYRINTH_HPP

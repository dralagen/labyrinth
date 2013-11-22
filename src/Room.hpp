/**
 * \file Room.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <iostream>

#include "Personnage.hpp"
#include "RoomEtat.hpp"
#include "RoomComportement.hpp"

#define WALL        "##"     ///< Affichage d'un mur
#define OPEN_DOOR   "  "     ///< Affichage d'une porte ouverte
#define CLOSED_DOOR "##"     ///< Affichage d'une porte vérouiller fermer
#define FOG         "******" ///< Affichage d'un brouillard

class RoomEtat;

class RoomComportement;

/**
 * \class Room
 * \brief gestion de salle
 *
 */
class Room
{
	public:
		/**
		 * \brief constucteur
		 */
		Room();
		/**
		 * \brief destructeur
		 */
		virtual ~Room();

		/**
		 * \brief Affiche le contenue de la salle
		 * sur 3 lignes en fonction de son état (visited, unvisited, position)
		 *
		 * \param t flux première ligne
		 * \param c flux deuxième ligne
		 * \param b flux troisième ligne
		 * \param godMode true => ignore l'état
		 *
		 */
		void print  (std::string &t,
								 std::string &c,
								 std::string &b,
								 bool godMode = false) const;

		/**
		 * \brief verifie si c'est la salle de fin
		 *
		 * \return vrai => salle de fin
		 */
		bool isEnd() const;

		/**
		 * \brief Effectue l'action de la salle
		 *
		 * \param perso Personnage qui fait l'action
		 *
		 * \return l'action realisé
		 */
		int action(Personnage &perso);

		/************
		 *  Setter  *
		 ************/
		/**
		 * \brief Ouvre/ferme un access vers la salle North
		 *
		 * \param b true => ouvre, false => ferme
		 */
		void setNorth   (bool b);
		/**
		 * \brief Ouvre/ferme un access vers la salle Est
		 *
		 * \param b true => ouvre, false => ferme
		 */
		void setEast    (bool b);
		/**
		 * \brief Ouvre/ferme un access vers la salle Sud
		 *
		 * \param b true => ouvre, false => ferme
		 */
		void setSouth   (bool b);
		/**
		 * \brief Ouvre/ferme un access vers la salle Ouest
		 *
		 * \param b true => ouvre, false => ferme
		 */
		void setWest    (bool b);
		/**
		 * \brief Modifie le comportement de la salle
		 *           /!\ Destruction de l'ancien comportement
		 *
		 * \param r nouveau comportement
		 */
		void setComportement (RoomComportement *r);

		/***************
		 *  Etat Room  *
		 ***************/
		/**
		 * \brief Etat de la salle : visité
		 */
		void setVisited   ();
		/**
		 * \brief Etat de la salle : ma position
		 */
		void setPosition  ();
		/**
		 * \brief Etat de la salle : non visité
		 */
		void setUnvisited ();

		/************
		 *  Getter  *
		 ************/
		/**
		 * \brief Récupère si l'access est possible au Nord
		 *
		 * \return vrai => on peut aller au Nord
		 */
		bool getNorth   () const;
		/**
		 * \brief Récupère si l'access est possible à l'Est
		 *
		 * \return vrai => on peut aller a l'Est
		 */
		bool getEast    () const;
		/**
		 * \brief Récupère si l'access est possible au Sud
		 *
		 * \return vrai => on peut aller au Sud
		 */
		bool getSouth   () const;
		/**
		 * \brief Récupère si l'access est possible à l'Ouest
		 *
		 * \return vrai => on peut aller à l'Ouest
		 */
		bool getWest    () const;
		/**
		 * \brief Récupère l'état de la salle
		 *
		 * \return vrai => on l'a déjà visité
		 */
		bool getVisited () const;
		/**
		 * \brief Récupère le contenue de la salle
		 *
		 * \return contenue de la salle
		 */
		std::string getContent () const;
	protected:
		bool m_north, ///< true => Porte Nord Ouverte
		     m_east,  ///< true => Porte Nord Ouverte
		     m_south, ///< true => Porte Nord Ouverte
		     m_west;  ///< true => Porte Nord Ouverte

		RoomEtat         *m_visited;     ///< Etat visité
		RoomEtat         *m_position;    ///< Etat ma position
		RoomEtat         *m_unvisited;   ///< Etat non visité
		RoomEtat         *m_etat;        ///< Etat courant
		RoomComportement *m_comp;        ///< Comportement de la salle

	private:
		/**
		 * \brief Modifie le flux de sortie pour afficher le contenue de la salle
		 *
		 * \param  s flux de sortie
		 *
		 * \return flux de sortie avec le contenue de la salle
		 */
		void top    (std::string  &s) const;
		/**
		 * \brief Modifie le flux de sortie pour afficher le contenue de la salle
		 *
		 * \param  s flux de sortie
		 *
		 * \return flux de sortie avec le contenue de la salle
		 */
		void center (std::string  &s) const;
		/**
		 * \brief Modifie le flux de sortie pour afficher le contenue de la salle
		 *
		 * \param  s flux de sortie
		 *
		 * \return flux de sortie avec le contenue de la salle
		 */
		void bottom (std::string  &s) const;
};


#endif // ROOM_HPP

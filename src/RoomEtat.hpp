/**
 * \file RoomEtat.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef ROOMETAT_HPP
#define ROOMETAT_HPP

#include <string>
#include <iostream>


class Room;
/**
 * \class RoomEtat
 * \brief Gestion de l'état de visite de la salle
 */
class RoomEtat
{
	public:
		RoomEtat();
		RoomEtat(Room *r);
		virtual ~RoomEtat ();

		/**
		 * \brief Ajout le contenue sur 3 lignes en fonction de l'etat
		 *
		 * \param t flux de la première lignes
		 * \param c flux de la deuxième lignes
		 * \param b flux de la troisième lignes
		 *
		 * \return
		 */
		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const = 0;

		/**
		 * \brief Verifie si on a déjà visité cette salle
		 *
		 * \return vrai si l'on déjà visité
		 */
		virtual bool visited() const = 0;

	protected:
		Room *m_room;
};

#endif /* ROOMETAT_HPP */


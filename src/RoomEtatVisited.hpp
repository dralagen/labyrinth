/**
 * \file RoomEtatVisited.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef ROOMETATVISITED_HPP
#define ROOMETATVISITED_HPP

#include "RoomEtat.hpp"

/**
 * \class RoomEtatVisited
 * \brief Salle déjà visité
 */
class RoomEtatVisited : public RoomEtat
{
	public:
		RoomEtatVisited(Room *r);
		virtual ~RoomEtatVisited();

		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const;

		virtual bool visited() const;

};

#endif /* ROOMETATVISITED_HPP */


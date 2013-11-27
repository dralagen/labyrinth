/**
 * \file RoomEtatUnvisited.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef ROOMETATUNVISITED_HPP
#define ROOMETATUNVISITED_HPP

#include <string>
#include <iostream>

#include "RoomEtat.hpp"

/**
 * \class RoomEtatUnvisited
 * \brief Salle jamais visité
 */
class RoomEtatUnvisited : public RoomEtat
{
	public:
		RoomEtatUnvisited(Room *r);
		virtual ~RoomEtatUnvisited();

		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const;

		virtual bool visited() const;
};

#endif /* ROOMETATUNVISITED_HPP */


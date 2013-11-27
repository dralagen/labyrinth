/**
 * \file RoomEtatPosition.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef ROOMETATPOSITION_HPP
#define ROOMETATPOSITION_HPP

#include "RoomEtat.hpp"

/**
 * \class RoomEtatPosition
 * \brief Salle identifé comme ma position
 */
class RoomEtatPosition : public RoomEtat
{
	public:
		RoomEtatPosition (Room *r);
		virtual ~RoomEtatPosition ();


		virtual void print  (std::string &t,
												 std::string &c,
												 std::string &b) const;

		virtual bool visited() const;

};

#endif /* ROOMETATPOSITION_HPP */


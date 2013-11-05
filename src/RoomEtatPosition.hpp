#ifndef ROOMETATPOSITION_HPP
#define ROOMETATPOSITION_HPP

#include "RoomEtat.hpp"

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


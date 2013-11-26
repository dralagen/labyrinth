#ifndef DARMEV_HPP
#define DARMEV_HPP

#include "DArme.hpp"

class DArmeV : public DArme
{
	public:
		DArmeV(Arme * e);
		~DArmeV();

		std::string getNom();
};


#endif /* DArmeV.hpp */

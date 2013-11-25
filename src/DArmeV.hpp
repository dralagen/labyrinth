#ifndef DARMEV_HPP
#define DARMEV_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DArme.hpp"

class DArmeV : public DArme
{
	public:
		DArmeV(Arme * e);
		~DArmeV();
};


#endif /* DArmeV.hpp */

#ifndef DARMED_HPP
#define DARMED_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DArme.hpp"

class DArmeD : public DArme
{
	public:
		DArmeD(Arme * e);
		~DArmeD();
};


#endif /* DArmeD.hpp */

#ifndef DARMEC_HPP
#define DARMEC_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DArme.hpp"

class DArmeC : public DArme
{
	public:
		DArmeC(Arme * e);
		~DArmeC();
};


#endif /* DArmeC.hpp */

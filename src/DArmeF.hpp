#ifndef DARMEF_HPP
#define DARMEF_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DArme.hpp"

class DArmeF : public DArme
{
	public:
		DArmeF(Arme * e);
		~DArmeF();
};


#endif /* DArmeF.hpp */

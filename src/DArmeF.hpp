#ifndef DARMEF_HPP
#define DARMEF_HPP

#include "DArme.hpp"

class DArmeF : public DArme
{
	public:
		DArmeF(Arme * e);
		~DArmeF();

		std::string getNom();
};


#endif /* DArmeF.hpp */

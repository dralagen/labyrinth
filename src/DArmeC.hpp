#ifndef DARMEC_HPP
#define DARMEC_HPP

#include "DArme.hpp"

class DArmeC : public DArme
{
	public:
		DArmeC(Arme *e);
		~DArmeC();

		std::string getNom();
};


#endif /* DArmeC.hpp */

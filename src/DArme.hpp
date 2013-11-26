#ifndef DARME_HPP
#define DARME_HPP

#include <iostream>
#include <sstream>

#include "Arme.hpp"

class DArme : public Arme
{
	protected:
		Arme * e_;
		std::string replace(std::string str);

	public:
		DArme(Arme *e);
		virtual ~DArme();
		virtual std::string getNom() = 0;
		int getBforce();
		int getBvie();
		int getBchance();
		int getDegat();
};

#endif /* DARME_HPP */


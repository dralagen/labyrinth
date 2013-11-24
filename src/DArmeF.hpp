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
		std::string getNom();
		int getBforce();
		int getBvie();
		int getBchance();
		int getDegat();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setDegat(int degat);
		void setNom(std::string nom);
};


#endif /* DArmeF.hpp */

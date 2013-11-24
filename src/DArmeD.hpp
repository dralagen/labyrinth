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


#endif /* DArmeD.hpp */

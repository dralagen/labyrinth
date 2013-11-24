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


#endif /* DArmeC.hpp */

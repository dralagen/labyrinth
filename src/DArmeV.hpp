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


#endif /* DArmeV.hpp */

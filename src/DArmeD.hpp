#ifndef DARMED_HPP
#define DARMED_HPP
#include "Arme.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DArmeD : public Arme
{

	private:
		Arme * e_;
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

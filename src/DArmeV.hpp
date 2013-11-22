#ifndef DARMEV_HPP
#define DARMEV_HPP
#include "Arme.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DArmeV : public Arme
{

	private:
		Arme * e_;
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

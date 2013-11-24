#ifndef DARME_HPP
#define DARME_HPP

#include "Arme.hpp"

class DArme : public Arme
{
	protected:
		Arme * e_;
	public:
		virtual ~DArme();
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

#endif /* DARME_HPP */


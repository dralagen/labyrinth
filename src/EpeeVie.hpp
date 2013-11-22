#ifndef EPEEVIE_HPP
#define EPEEVIE_HPP
#include "Epee.hpp"
#include <string>
class EpeeVie : public Epee
{
	private:
		std::string nom_;
		int degat_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		EpeeVie();
		~EpeeVie();
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



#endif /* EpeeVie.hpp */

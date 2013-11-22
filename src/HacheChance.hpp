#ifndef HACHECHANCE_HPP
#define HACHECHANCE_HPP
#include "Hache.hpp"
#include <string>
class HacheChance : public Hache
{
	private:
		std::string nom_;
		int degat_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		HacheChance();
		~HacheChance();
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



#endif /* HacheChance.hpp */

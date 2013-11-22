#ifndef HACHEVIE_HPP
#define HACHEVIE_HPP
#include "Hache.hpp"
#include <string>
class HacheVie : public Hache
{
	private:
		std::string nom_;
		int degat_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		HacheVie();
		~HacheVie();
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



#endif /* HacheVie.hpp */

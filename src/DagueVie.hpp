#ifndef DAGUEVIE_HPP
#define DAGUEVIE_HPP
#include "Dague.hpp"
#include <string>
class DagueVie : public Dague
{
  private:
    std::string nom_;
    int degat_;
    int bchance_;
    int bvie_;
    int bforce_;
	public:
		DagueVie();
    ~DagueVie();
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



#endif /* DagueVie.hpp */
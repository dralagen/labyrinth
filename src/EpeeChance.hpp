#ifndef EPEECHANCE_HPP
#define EPEECHANCE_HPP
#include "Epee.hpp"
#include <string>
class EpeeChance : public Epee
{
  private:
    std::string nom_;
    int degat_;
    int bchance_;
    int bvie_;
    int bforce_;
	public:
		EpeeChance();
    ~EpeeChance();
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



#endif /* EpeeChance.hpp */

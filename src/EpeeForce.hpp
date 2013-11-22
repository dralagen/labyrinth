#ifndef EPEEFORCE_HPP
#define EPEEFORCE_HPP
#include "Epee.hpp"
#include <string>
class EpeeForce : public Epee
{
  private:
    std::string nom_;
    int degat_;
    int bchance_;
    int bvie_;
    int bforce_;
	public:
		EpeeForce();
    ~EpeeForce();
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



#endif /* EpeeForce.hpp */

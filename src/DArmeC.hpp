#ifndef DARMEC_HPP
#define DARMEC_HPP
#include "Arme.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DArmeC : public Arme
{
 
    private:
        Arme * e_;
    public:
        DArmeC(Arme * e);
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


#endif /* DArmeC.hpp */

#ifndef DEQUIPA_HPP
#define DEQUIPA_HPP
#include "Equipement.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DEquipA : public Equipement
{
 
    private:
        Equipement * e_;
    public:
        DEquipA(Equipement * e);
        std::string getNom();
        int getBforce();
        int getBvie();
        int getBchance();
		int getArmure();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setArmure(int armure);
		void setNom(std::string nom);
		int type();
};


#endif /* DEquipA.hpp */

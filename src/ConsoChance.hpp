#ifndef CONSOCHANCE_HPP
#define CONSOCHANCE_HPP
#include "Conso.hpp"
#include <string>
class ConsoChance : public Conso
{   
    private:
        std::string nom_;
        int bchance_;
        int bvie_;
        int bforce_;
	public:
		ConsoChance();
		std::string getNom();
		int getBforce();
        int getBvie();
        int getBchance();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setNom(std::string nom);
};



#endif /* ConsoChance.hpp */

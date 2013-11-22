#ifndef CONSOFORCE_HPP
#define CONSOFORCE_HPP
#include "Conso.hpp"
#include <string>
class ConsoForce : public Conso
{
	private:
		std::string nom_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		ConsoForce();
		std::string getNom();
		int getBforce();
		int getBvie();
		int getBchance();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setNom(std::string nom);
};



#endif /* ConsoForce.hpp */

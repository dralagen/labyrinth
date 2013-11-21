#ifndef JAMBE_HPP
#define JAMBE_HPP
#include "Equipement.hpp"
#include <string>
class Jambe : public Equipement
{

	public:
		//virtual ~Jambe();
		virtual std::string getNom()=0;
		virtual int getBforce()=0;
		virtual int getBvie()=0;
		virtual int getBchance()=0;
		virtual int getArmure()=0;
		virtual void setBforce(int bforce)=0;
		virtual void setBvie(int bvie)=0;
		virtual void setBchance(int bchance)=0;
		virtual void setArmure(int armure)=0;
		virtual void setNom(std::string nom)=0;
		int type();
};



#endif /* Jambe.hpp */

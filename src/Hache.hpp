#ifndef HACHE_HPP
#define HACHE_HPP
#include "Arme.hpp"
#include <string>
class Hache : public Arme
{   

	public:
	    virtual std::string getNom()=0;
        virtual int getBforce()=0;
        virtual int getBvie()=0;
        virtual int getBchance()=0;
		virtual int getDegat()=0;
		virtual void setBforce(int bforce)=0;
		virtual void setBvie(int bvie)=0;
		virtual void setBchance(int bchance)=0;
		virtual void setDegat(int degat)=0;
		virtual void setNom(std::string nom)=0;
};



#endif /* Hache.hpp */

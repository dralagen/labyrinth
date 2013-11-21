#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP
#include <string>

#define EQCASQUE 1
#define EQTORSE 2
#define EQJAMBE 3

class Equipement
{
    public :
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
		virtual int type() = 0;
};
#endif /* Equipement.hpp */

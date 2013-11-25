/**
 * \file Casque.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef CASQUE_HPP
#define CASQUE_HPP
#include <string>
#include "Equipement.hpp"
/**
 * \class Casque
 * \brief Casque herite de Equipement
 */
class Casque : public Equipement
{

	public:
		virtual ~Casque() {}
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



#endif /* Casque.hpp */

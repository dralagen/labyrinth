/**
 * \file CasqueForce.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef CASQUEFORCE_HPP
#define CASQUEFORCE_HPP
#include "Casque.hpp"
#include <string>
/**
 * \class CasqueForce
 * \brief CasqueForce herite de Casque
 */
class CasqueForce : public Casque
{
	private:
		std::string nom_;
		int armure_;
		int bchance_;
		int bvie_;
		int bforce_;
	public:
		CasqueForce();
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
};



#endif /* CasqueForce.hpp */

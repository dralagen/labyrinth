/**
 * \file EpeeVie.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef EPEEVIE_HPP
#define EPEEVIE_HPP
#include "Epee.hpp"
#include <string>
/**
 * \class EpeeVie
 * \brief EpeeVie herite de Epee
 */
class EpeeVie : public Epee
{
	public:
		EpeeVie();
		~EpeeVie();
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



#endif /* EpeeVie.hpp */

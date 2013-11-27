/**
 * \file Casque.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
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
		Casque();
		virtual ~Casque();
		int type();
};



#endif /* Casque.hpp */

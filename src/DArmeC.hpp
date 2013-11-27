/**
 * \file DArmeC.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DARMEC_HPP
#define DARMEC_HPP

#include "DArme.hpp"
/**
*\class DArmeC
*\brief Decorator d'arme de Chance, hérite de DArme
**/
class DArmeC : public DArme
{
	public:
		DArmeC(Arme *e);
		~DArmeC();
};


#endif /* DArmeC.hpp */

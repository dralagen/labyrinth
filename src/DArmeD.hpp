/**
 * \file DArmeD.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DARMED_HPP
#define DARMED_HPP
#include <iostream>
#include <sstream>
#include <string>

#include "DArme.hpp"
/**
*\class DArmeD
*\brief Decorator d'arme de degats, hérite de DArme
**/
class DArmeD : public DArme
{
	public:
		DArmeD(Arme * e);
		~DArmeD();
};


#endif /* DArmeD.hpp */

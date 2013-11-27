/**
 * \file DArmeF.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DARMEF_HPP
#define DARMEF_HPP

#include "DArme.hpp"
/**
*\class DArmeF
*\brief Decorator d'arme de force, hérite de DArme
**/
class DArmeF : public DArme
{
	public:
		DArmeF(Arme * e);
		~DArmeF();
};


#endif /* DArmeF.hpp */

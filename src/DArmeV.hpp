/**
 * \file DArmeV.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef DARMEV_HPP
#define DARMEV_HPP

#include "DArme.hpp"
/**
*\class DArmeV
*\brief Decorator d'arme de vie, hérite de DArme
**/
class DArmeV : public DArme
{
	public:
		DArmeV(Arme * e);
		~DArmeV();
};


#endif /* DArmeV.hpp */

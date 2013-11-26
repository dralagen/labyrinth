/**
 * \file Jambe.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef JAMBE_HPP
#define JAMBE_HPP

#include "Equipement.hpp"

#include <string>

/**
 * \class Jambe
 * \brief Jambe herite de Equipement
 */
class Jambe : public Equipement
{

	public:
		Jambe();
		virtual ~Jambe();
		int type();
};

#endif /* Jambe.hpp */


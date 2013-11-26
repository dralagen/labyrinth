/**
 * \file Torse.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */

#ifndef TORSE_HPP
#define TORSE_HPP

#include "Equipement.hpp"

#include <string>

/**
 * \class Torse
 * \brief Torse herite de Equipement
 */
class Torse : public Equipement
{

	public:
		Torse();
		virtual ~Torse();
		int type();
};

#endif /* Torse.hpp */


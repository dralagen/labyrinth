/**
 * \file DArmeC.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */

#include "DArmeC.hpp"

DArmeC::DArmeC(Arme * e):DArme(e) {
	nom_ = replace(" de Chance");
	bchance_ = 2;
}

DArmeC::~DArmeC() {
}


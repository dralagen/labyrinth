/**
 * \file DArmeV.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */

#include "DArmeV.hpp"

DArmeV::DArmeV(Arme * e): DArme(e) {
	nom_ = replace(" de Vie");
	bvie_ = 2;
}

DArmeV::~DArmeV() {}


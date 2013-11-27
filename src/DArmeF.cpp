/**
 * \file DArmeF.cpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 27/11/2013
 */

#include "DArmeF.hpp"

DArmeF::DArmeF(Arme * e): DArme(e) {
	nom_ = replace(" de Force");
	bforce_ = 2;
}

DArmeF::~DArmeF() {}


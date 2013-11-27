/**
 * \file DArmeD.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "DArmeD.hpp"

DArmeD::DArmeD(Arme * e): DArme(e) {
	nom_ = replace(" de Puissance");
	degat_ = 2;
}

DArmeD::~DArmeD() {}


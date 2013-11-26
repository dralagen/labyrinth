#include "DArmeD.hpp"

DArmeD::DArmeD(Arme * e): DArme(e) {
	nom_ = replace(" de Puissance");
	degat_ = 2;
}

DArmeD::~DArmeD() {}


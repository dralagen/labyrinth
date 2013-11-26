
#include "DArmeF.hpp"

DArmeF::DArmeF(Arme * e): DArme(e) {
	nom_ = replace(" de Force");
	bforce_ = 2;
}

DArmeF::~DArmeF() {}


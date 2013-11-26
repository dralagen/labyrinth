
#include "DArmeF.hpp"

DArmeF::DArmeF(Arme * e): DArme(e) {
	bforce_ = 2;
}

DArmeF::~DArmeF() {}

std::string DArmeF::getNom() {
	return replace(" de Force");
}


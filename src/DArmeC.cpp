
#include "DArmeC.hpp"

DArmeC::DArmeC(Arme * e):DArme(e) {
	bchance_ = 2;
}

DArmeC::~DArmeC() {
}

std::string DArmeC::getNom() {
	return replace(" de Chance");
}


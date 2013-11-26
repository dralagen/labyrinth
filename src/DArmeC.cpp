
#include "DArmeC.hpp"

DArmeC::DArmeC(Arme * e):DArme(e) {
	nom_ = replace(" de Chance");
	bchance_ = 2;
}

DArmeC::~DArmeC() {
}



#include "DArmeV.hpp"

DArmeV::DArmeV(Arme * e): DArme(e) {
	bvie_ = 2;
}

DArmeV::~DArmeV() {}

std::string DArmeV::getNom() {
	return replace(" de Vie");
}

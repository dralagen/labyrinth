#include "DArmeD.hpp"

DArmeD::DArmeD(Arme * e): DArme(e) {
		degat_ = 2;
}

DArmeD::~DArmeD() {}

std::string DArmeD::getNom() {
	return replace(" de Puissance");
}


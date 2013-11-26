
#include "DArmeV.hpp"

DArmeV::DArmeV(Arme * e): DArme(e) {
	nom_ = replace(" de Vie");
	bvie_ = 2;
}

DArmeV::~DArmeV() {}


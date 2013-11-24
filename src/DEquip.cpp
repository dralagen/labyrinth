#include "DEquip.hpp"

DEquip::~DEquip() {
	delete e_;
}

int DEquip::type()
{
	if (e_ == NULL)
		return EQBONUS;

	return e_->type();
}


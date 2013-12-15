/**
 * \file Random.cpp
 * \brief Implementation de la classe Random
 * \author Dralagen
 * \version 1.1
 * \date 15/12/2013
 */
#include "Random.hpp"

#include <ctime>

Random* Random::s_instance = 0;

Random::Random() {
	if (s_instance == 0) {
		srand(time(NULL));
		s_instance = this;
	}
}

Random::~Random() {
}

int Random::getRand() {
	return rand();
}


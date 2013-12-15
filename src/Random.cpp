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


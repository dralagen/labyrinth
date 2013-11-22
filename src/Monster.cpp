#include "Monster.hpp"

Monster::Monster(int lvl): m_life(MONSTER_LIFE_MAX), m_damage(10), m_lvl(lvl){
	std::ostringstream name;
	name << "Monstre lvl " << lvl;
	m_name = name.str();
}

Monster::~Monster() {}

int Monster::give() {
	return m_damage+(rand()%m_lvl);
}

bool Monster::receive(int life) {
	m_life = m_life - (life-rand()%(m_lvl));
	if (m_life <= 0)
		return true;
	return false;
}

int Monster::getLife() {
	return m_life;
}

std::string Monster::getName() {
	return m_name;
}

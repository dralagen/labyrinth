/**
 * \file Monster.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Monster.hpp"

Monster::Monster(int lvl): m_life(MONSTER_LIFE_MAX*lvl), m_damage(5*lvl), m_lvl(lvl){
	std::ostringstream name;
	name << "Monstre lvl " << lvl;
	m_name = name.str();
}

Monster::~Monster() {}

int Monster::giveDamage() {
	return m_damage+(rand()%(2*m_lvl));
}

int Monster::receiveDamage(int life) {
	int damage = life - rand()%(2*m_lvl);
	if (damage < 0)
		damage = 0;

	m_life -= damage;
	if (m_life < 0)
		m_life = 0;

	return damage;
}

int Monster::getLife() {
	return m_life;
}

std::string Monster::getName() {
	return m_name;
}

bool Monster::isAlive() {
	return (m_life > 0);
}


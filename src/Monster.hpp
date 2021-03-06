/**
 * \file Monster.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

#define MONSTER_LIFE_MAX 100

/**
 * \class Monster
 * \brief Gestion d'un monstre
 */
class Monster
{
	public:
		Monster (int lvl=1);
		virtual ~Monster ();

		/**
		 * \brief Degats fait par le monstre
		 *
		 * \return Retourne le nombre de vie perdu pour 0 d'armure
		 */
		int giveDamage();


		/**
		 * \brief Le monstre reçoit des dommages
		 *
		 * \param Dommage sans armure
		 *
		 * \return Retourne les dommages après application de l'armure
		 */
		int receiveDamage(int damage);

		/**
		 * \brief Nom du monstre
		 *
		 * \return Retourne le nom du monstre (Monstre lvl X)
		 */
		std::string getName();
		/**
		 * \brief Vie du monstre
		 *
		 * \return Retourne les points de vie du monstre
		 */
		int getLife();

		/**
		 * \brief Test si le monstre est vivant
		 *
		 * \return Retourne vrai si le monstre est encore en vie
		 */
		bool isAlive();

	private:
		int m_life;
		int m_damage;
		int m_lvl;
		std::string m_name;
};

#endif /* MONSTER_HPP */


#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

#define MONSTER_LIFE_MAX 100

class Monster
{
	public:
		Monster (int lvl=1);
		virtual ~Monster ();

		/**
		 * \brief The monster gives damage
		 *
		 * \return nb HP with 0 armor
		 */
		int giveDamage();


		/**
		 * \brief The monster receives damage
		 *
		 * \param damage with 0 armor
		 *
		 * \return damage reel
		 */
		int receiveDamage(int damage);

		/**
		 * \brief
		 *
		 * \return
		 */
		std::string getName();
		/**
		 * \brief
		 *
		 * \return
		 */
		int getLife();

		/**
		 * \brief
		 *
		 * \return
		 */
		bool isAlive();

	private:
		int m_life;
		int m_damage;
		int m_lvl;
		std::string m_name;
};

#endif /* MONSTER_HPP */


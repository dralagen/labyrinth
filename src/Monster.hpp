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
		 * \return nb PV
		 */
		int give();


		/**
		 * \brief The monster receives damage
		 *
		 * \param life
		 *
		 * \return true if is dead
		 */
		bool receive(int life);

		std::string getName();
		int getLife();

	private:
		int m_life;
		int m_damage;
		int m_lvl;
		std::string m_name;
};

#endif /* MONSTER_HPP */


#ifndef MONSTERROOM_HPP
#define MONSTERROOM_HPP

#include <unistd.h>

#include "RoomComportement.hpp"
#include "Monster.hpp"

/**
 * \class MonsterRoom
 * \brief Comportement de Salle contenant un monstre
 */
class MonsterRoom : public RoomComportement
{
	public:
		/**
		 * \brief Constructeur
		 *
		 * \param lvl niveau du monstre à combattre (0<lvl<=10)
		 */
		MonsterRoom (int lvl=1);
		virtual ~MonsterRoom ();

		virtual int action(Personnage &perso);
	private:
		Monster m_monster; ///< Monstre à combattre
};

#endif /* MONSTERROOM_HPP */


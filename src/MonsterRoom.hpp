#ifndef MONSTERROOM_HPP
#define MONSTERROOM_HPP

#include "RoomComportement.hpp"
#include "Monster.hpp"

class MonsterRoom : public RoomComportement
{
	public:
		MonsterRoom (int lvl=1);
		virtual ~MonsterRoom ();

		virtual int action(Personnage &perso);
	private:
		Monster m_monster;
};

#endif /* MONSTERROOM_HPP */


/**
 * \file EndRoom.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 23/11/2013
 */
#ifndef ENDROOM_HPP
#define ENDROOM_HPP

#include "RoomComportement.hpp"
#include "MonsterRoom.hpp"

/**
 * \class EndRoom
 * \brief Salle de fin du labyrinth
 */
class EndRoom : public RoomComportement
{
	public:
		EndRoom (int lvl = 10);
		virtual ~EndRoom();

		virtual bool isEnd() const;

		virtual int action(Personnage &perso);

	private:
		MonsterRoom m_boss;
};

#endif /* ENDROOM_HPP */


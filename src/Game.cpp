/**
 * \file Game.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#include "Game.hpp"

#include <unistd.h>

Game::Game(std::string name, int x, int y): m_labyrinth(x,y), m_perso(name) {}

void Game::launch() {
	help();
	m_labyrinth.gen();
	sleep(3);
	do {
		m_labyrinth.print();
		m_perso.actuStat();
		m_perso.afficheStat();
		m_perso.afficheEquip();
		chooseRoom();
		m_labyrinth.action(m_perso);
	} while(!m_labyrinth.isEnd() && m_perso.getVie() > 0);

	sleep(3);
	m_labyrinth.print(true);
}

void Game::chooseRoom() {
	bool ret = false;
	std::string buf;
	while (!ret) {
		std::cout << "Votre choix ? ";
		std::cin >> buf;
		std::cout << std::endl;

		switch (buf[0]) {
			case 'z':
				if (m_labyrinth.hasNorth()) {
					m_labyrinth.goNorth();
					ret = true;
				}
				break;

			case 'd':
				if (m_labyrinth.hasEast()) {
					m_labyrinth.goEast();
					ret = true;
				}
				break;

			case 's':
				if (m_labyrinth.hasSouth()) {
					m_labyrinth.goSouth();
					ret = true;
				}
				break;

			case 'q':
				if (m_labyrinth.hasWest()){
					m_labyrinth.goWest();
					ret = true;
				}
				break;
			case 'h':
				help();
				break;
		}
	}
}

void Game::help() {
	std::cout << "****************************" << std::endl;
	std::cout << "Commande de base : " << std::endl;
	std::cout << "'z' pour aller au nord" << std::endl;
	std::cout << "'d' pour aller à l'est" << std::endl;
	std::cout << "'s' pour aller au sud" << std::endl;
	std::cout << "'q' pour aller à l'ouest" << std::endl;
	std::cout << "'h' pour afficher cette aide" << std::endl;
	std::cout << "****************************" << std::endl;
}


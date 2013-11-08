#include "Game.hpp"

Game::Game(int x, int y): m_labyrinth(x,y) {}

//Game::Game(const Labyrinth &lab): m_labyrinth(lab)  {}

void Game::launch() {
	m_labyrinth.gen();
	while(!m_labyrinth.isEnd()) {
		m_labyrinth.print();
		m_labyrinth.action();
		chooseRoom();
	}

	end();
}

void Game::chooseRoom() {
	if (m_labyrinth.hasNorth()) {
		std::cout << "z) aller au nord" << std::endl;
	}
	if (m_labyrinth.hasEast()) {
		std::cout << "d) aller à l'est" << std::endl;
	}
	if (m_labyrinth.hasSouth()) {
		std::cout << "s) aller au sud" << std::endl;
	}
	if (m_labyrinth.hasWest()) {
		std::cout << "q) aller à l'ouest" << std::endl;
	}

	char buf;
	std::cout << "Votre choix ? ";
	std::cin >> buf;
	std::cout << std::endl;

	switch (buf) {
		case 'z':
			m_labyrinth.goNorth();
			break;

		case 'd':
			m_labyrinth.goEast();
			break;

		case 's':
			m_labyrinth.goSouth();
			break;

		case 'q':
			m_labyrinth.goWest();
			break;

	}

}

void Game::end() {
	m_labyrinth.print(true);
	std::cout << "Vous êtes sorti de ce labyrinth" << std::endl;
}

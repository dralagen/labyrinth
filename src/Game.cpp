#include "Game.hpp"

Game::Game(int x, int y): m_labyrinth(x,y) {}

//Game::Game(const Labyrinth &lab): m_labyrinth(lab)  {}

void Game::launch() {
	m_labyrinth.gen();
	int act;
	while(!m_labyrinth.isEnd()) {
		act = m_labyrinth.action();
		if (act == RC_MONSTER)
			fight();
		else if (act == RC_TREASURE)
			treasure();

		m_labyrinth.print();
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

	std::string buf;
	std::cout << "Votre choix ? ";
	std::cin >> buf;
	std::cout << std::endl;

	switch (buf[0]) {
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

void Game::fight() {
	m_labyrinth.clean();
}

void Game::treasure() {
	m_labyrinth.clean();
}

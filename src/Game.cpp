#include "Game.hpp"

Game::Game(int x, int y): m_labyrinth(x,y) {}

Game::Game(const Labyrinth &lab): m_labyrinth(lab)  {}

void Game::launch() {
	m_labyrinth.print();
}


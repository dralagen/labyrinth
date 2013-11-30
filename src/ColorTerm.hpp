#ifndef COLORTERM_HPP
#define COLORTERM_HPP

#include <ostream>

/*
enum Code {
	FG_RED     = 31,
	FG_GREEN   = 32,
	FG_YELLOW  = 33,
	FG_BLUE    = 34,
	FG_MAGENTA = 35,
	FG_CYAN    = 36,
	FG_WHITE   = 37,
	FG_DEFAULT = 39,

	BG_RED     = 41,
	BG_GREEN   = 42,
	BG_YELLOW  = 43,
	BG_BLUE    = 44,
	BG_MAGENTA = 45,
	BG_CYAN    = 46,
	BG_WHITE   = 47,
	BG_DEFAULT = 39
};

color : "\033[`CODE`m"

*/

/************
 *  Global  *
 ************/

#define COLOR_RESET "\033[0m"
#define COLOR_ERROR "\033[31m"

/****************
 *  Personnage  *
 ****************/

#define COLOR_PLAYER "\033[36m" // cyan
#define COLOR_STAT   "\033[32m" // green
#define COLOR_EQUIP  "\033[33m" // yellow
#define COLOR_DEAD   "\033[31m" // red

/************
 *  Combat  *
 ************/
#define COLOR_MONSTER    "\033[1m" // bold
#define COLOR_DAMAGE     "\033[31m" // red
#define COLOR_MONSTER_HP "\033[1;31m" // bold red
#define COLOR_PLAYER_HP  "\033[1;32m" // bold gree


/**********
 *  Loot  *
 **********/
#define COLOR_IMPROVEMENT "\033[34m" // bleu

/*********
 *  Map  *
 *********/
#define COLOR_MAP_DEFAULT "\033[1;39m" // bold
#define COLOR_MAP_TREASURE "\033[33m" // yellow
#define COLOR_MAP_MONSTER "\033[31m" // red
#define COLOR_MAP_END "\033[35m" // magenta
#define COLOR_MAP_START "\033[34m" // bleu


#endif /* COLORTERM_HPP */


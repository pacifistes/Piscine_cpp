#ifndef GAME_CLASS_H
# define GAME_CLASS_H

#include <ctime>
#include <curses.h>
#include "AGameEntity.hpp"
#include "Player.hpp"
#include "Map.hpp"
#include "GameController.hpp"
#include <iostream>


# define ESC	27
# define SPACE	32
class Game {

	public :
		Game(void);
		~Game(void);
		Game(Game const &game);
		Game & operator=(Game const &game);
		bool	init();
		void	play();


	private :
		bool			_initWindowAndMap();
		AGameEntity*	_player;
		Map*			_map;
		bool			_isInit;
		WINDOW*			_win;
		GameController	_control;
		WINDOW*			_winScore;
		unsigned int	_life;
		unsigned int	_score;
		timeval			_stime;
};
#endif

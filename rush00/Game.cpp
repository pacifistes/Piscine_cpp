#include "Game.hpp"
Game::Game(void) : _player(0), _map(0), _isInit(false), _life(1), _score(0) {////////CHANGER
	return;
}

Game::Game(Game const &game) {
	*this = game;
	return;
}

Game::~Game(void) {
	endwin();
	return;
}

Game	&Game::operator=(Game const &game) {
	this->_player = game._player;
	this->_map = game._map;
	this->_isInit = game._isInit;
	this->_win = game._win;
	this->_control = game._control;
	this->_winScore = game._winScore;
	this->_life = game._life;
	this->_score = game._score;
	this->_stime = game._stime;
	return *this;
}

bool	Game::_initWindowAndMap() {
	int x;
	int y;
	//	Initialisation NCURSE
	initscr();
	clear();
	noecho();
	cbreak();
	timeout(10);
	keypad(stdscr, true);
	nodelay(stdscr, true);
	curs_set(0);

	//	Initialisation Window
	getmaxyx(stdscr, y, x);
	y = y - 4;
	this->_win = newwin(y, x , 0, 0);
// +	//  Time initialisation
	gettimeofday(&this->_stime, NULL);
	if (x < 4 || y < 4) {
		endwin();
		return false;
	}
	this->_map = new Map(y-2, x-2);
 	this->_winScore = newwin(3, x, y, 0);

	return true;
}

bool 	Game::init() {
	this->_isInit = true;
	std::srand(std::time(NULL));
	if (!_initWindowAndMap()) {
		return false;
	}
	this->_player = new Player();
	this->_control.pushPlayer(this->_map, this->_player);
	return true;
}

void	Game::play() {
	timeval		time;
	long int	start = 0;
	long int	tmp = 0;
	long int	interval = 0;
	int			ch;

	gettimeofday(&time, NULL);
	start = time.tv_sec * 1000 + time.tv_usec / 1000;
	for (;;) {
		if (!this->_control.isPlayerAlive(this->_map)) {
			endwin();
			exit(0);
		}
		gettimeofday(&time, NULL);
		interval = (time.tv_sec * 1000 + time.tv_usec / 1000) - start - tmp;
		switch (ch = getch()) {
			case ESC :
				endwin();
				exit(0);
				break;
			case KEY_LEFT :
				this->_control.move(this->_map, this->_player, 0, -1, this->_score);
				break;
			case KEY_RIGHT :
				this->_control.move(this->_map, this->_player, 0, 1, this->_score);
				break;
			case KEY_RESIZE :
				endwin();
				std::cout << "Program quit because of a resize of the Window. Dont touch it!" << std::endl;
				exit(0);
				break;
			case 32 :
				this->_control.addMissile(this->_map, this->_player, -1, 0, this->_score);
				break;
			case 112 :
				while ((ch = getch()) != 112) {
					this->_control.pauseScreen(this->_win, this->_map);
					if (ch == ESC) {
						endwin();
						exit(0);
					}
				}
			break;
		}
		if (interval >= 100) {
			tmp += interval;
			this->_control.moveAll(this->_map, this->_score);
			this->_control.addRandomEnemies(this->_map);
		}
		this->_control.displayScore(this->_winScore, this->_score, this->_life, this->_stime);	
		this->_control.displayMap(this->_win, this->_map);
	}
}

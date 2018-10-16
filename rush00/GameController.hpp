#ifndef GAME_CONTROLLER_CLASS_H
# define GAME_CONTROLLER_CLASS_H

#include <sys/time.h>
#include <sstream>
#include "Map.hpp"
#include "AGameEntity.hpp"
#include "Missile.hpp"
#include "Enemy.hpp"

class GameController {

	public :
		GameController(void);
		~GameController(void);
		GameController(GameController const &gameController);
		GameController & operator=(GameController const &gameController);
		
		void	pushPlayer(Map *map, AGameEntity *player) const;
		void	displayMap(WINDOW* win, Map* map)const;
		bool	isPlayerAlive(Map *map) const;

		void move(Map *map, AGameEntity* entity, int shiftingX, int shiftingY, unsigned int &score);
		void addRandomEnemies(Map *map);
		void moveAll(Map *map, unsigned int &score);
		void addMissile(Map *map, AGameEntity* entity, int shiftingY, int shiftingX, unsigned int &score);
		
		void pauseScreen(WINDOW* win, Map* map);
		void displayBackground(WINDOW* win, Map* map) const;
		void displayScore(WINDOW* win, int score, int life, timeval stime);

	private :
		void _checkCollision(Map *map, AGameEntity* entity, int shiftingY, int shiftingX, unsigned int &score);

};
#endif
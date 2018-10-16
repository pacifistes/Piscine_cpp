#include "GameController.hpp"

GameController::GameController(void) {
	return;
}

GameController::GameController(GameController const &gameController) {
	*this = gameController;
	return;
}

GameController::~GameController(void) {
	return;
}

GameController	&GameController::operator=(GameController const &gameController) {
	(void)gameController;
	return *this;
}

void	GameController::pushPlayer(Map *map, AGameEntity *player) const {
	if (map->getMap()) {
		map->getMap()[map->getMaxY() - 1][map->getMaxX() / 2] = player;
		player->setPositionY(map->getMaxY() - 1);
		player->setPositionX(map->getMaxX() / 2);
	}
}

void	GameController::displayMap(WINDOW* win, Map* map) const {
	wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);
 	displayBackground(win, map);
	for (unsigned int y = 0; y < map->getMaxY(); ++y) {
		for (unsigned int x = 0; x < map->getMaxX(); ++x) {
			if (map->getMap()[y][x] != 0)
				mvwaddch(win, y + 1, x + 1, map->getMap()[y][x]->getClassCharacter());
		}
	}
	wrefresh(win);
}

bool	GameController::isPlayerAlive(Map *map) const {
	if (!map->getMap())
		return false;
	for (int y = (int)map->getMaxY() - 1; y >= 0; --y)
	{
		for (int x = (int)map->getMaxX() - 1; x >= 0; --x)
		{
			if (map->getMap()[y][x] != 0 && map->getMap()[y][x]->getClassCharacter() == '^') {
				return true;
			}
		}
	}
	return false;
}



void GameController::move(Map *map, AGameEntity* entity, int shiftingY, int shiftingX, unsigned int &score) {
	int x;
	int y;

	x = (int)entity->getPositionX();
	y = (int)entity->getPositionY();
	if (!map->getMap())
		return;
	 if (x + shiftingX < 0 || x + shiftingX >= (int)map->getMaxX()
			|| y + shiftingY < 0 || y + shiftingY >= (int)map->getMaxY()) {//Si on sort de la mapavec deplacement de 1
			return;
	}
	if (map->getMap()[y + shiftingY][x + shiftingX] == 0) 
	{
		map->getMap()[y][x] = 0; 
		map->getMap()[y + shiftingY][x + shiftingX] = entity;
		entity->setPositionY(y + shiftingY);
		entity->setPositionX(x + shiftingX);
		return;
	}
	else {
		_checkCollision(map, entity, shiftingY, shiftingX, score);
	}
}

void GameController::addRandomEnemies(Map *map) {
	if (!map->getMap())
		return;
	for (int x = 0; x < (int)map->getMaxX(); ++x)
	{
		if (map->getMap()[0][x] == 0 && std::rand() % 10 == 0) {// 10% de chance de faire apparaitre un nouvelle enemy
			 map->getMap()[0][x] = new Enemy();
			 map->getMap()[0][x]->setPositionX(x);
			 map->getMap()[0][x]->setPositionY(0);
		}
	}
}

void GameController::moveAll(Map *map, unsigned int &score) {
	if (!map->getMap())
		return;
	for (int y = (int)map->getMaxY() - 1; y >= 0; --y)
	{
		for (int x = (int)map->getMaxX() - 1; x >= 0; --x)
		{
			if (map->getMap()[y][x] != 0 && map->getMap()[y][x]->getClassCharacter() == '#') {
				if (y == (int)map->getMaxY() - 1) {
					delete map->getMap()[y][x];
					map->getMap()[y][x] = 0;
				}
				else {
					move(map, map->getMap()[y][x], 1, 0, score);

				}
			}
		}
	}
	for (int y =  0; y < (int)map->getMaxY(); ++y)
	{
		for (int x = 0; x < (int)map->getMaxX(); ++x)
		{
			if (map->getMap()[y][x] != 0 && map->getMap()[y][x]->getClassCharacter() == '|') {
				if (y == 0) {
					delete map->getMap()[y][x];
					map->getMap()[y][x] = 0;
				}
				else {
					move(map, map->getMap()[y][x], -1, 0, score);
				}
			}
		}
	}
}

void GameController::addMissile(Map *map, AGameEntity* entity, int shiftingY, int shiftingX, unsigned int &score) {
	if (!map->getMap())
		return;
	int x;
	int y;

	x = (int)entity->getPositionX();
	y = (int)entity->getPositionY();

	if (x + shiftingX < 0 || x + shiftingX >= (int)map->getMaxX()
			|| y + shiftingY < 0 || y + shiftingY >= (int)map->getMaxY()) {//Si on sort de la map avec deplacement de 1
			return;
	}
	if (map->getMap()[y + shiftingY][x + shiftingX] != 0) {
		if (map->getMap()[y + shiftingY][x + shiftingX]->getClassCharacter() == '#') {
			delete map->getMap()[y + shiftingY][x + shiftingX];
			map->getMap()[y + shiftingY][x + shiftingX] = 0;
			score += 50;
		}
	}
	else {
		map->getMap()[y + shiftingY][x + shiftingX] = new Missile();
		map->getMap()[y + shiftingY][x + shiftingX]->setPositionX(x + shiftingX);
		map->getMap()[y + shiftingY][x + shiftingX]->setPositionY(y + shiftingY);		
	}
}

void GameController::_checkCollision(Map *map, AGameEntity* entity, int shiftingY, int shiftingX, unsigned int &score) {
	int x;
	int y;

	x = (int)entity->getPositionX();
	y = (int)entity->getPositionY();
	if (entity->getClassCharacter() == '#') {
		if (map->getMap()[y + shiftingY][x + shiftingX]->getClassCharacter() == '|') {
			delete entity;
			delete map->getMap()[y + shiftingY][x + shiftingX];
			map->getMap()[y][x] = 0;
			map->getMap()[y + shiftingY][x + shiftingX] = 0;
		}
		else if (map->getMap()[y + shiftingY][x + shiftingX]->getClassCharacter() == '^') {//ajoute le score
			delete map->getMap()[y + shiftingY][x + shiftingX];
			map->getMap()[y][x] = 0; 
			map->getMap()[y + shiftingY][x + shiftingX] = entity;
			entity->setPositionY(y + shiftingY);
			entity->setPositionX(x + shiftingX);
		}
	}
	else if (entity->getClassCharacter() == '|' && map->getMap()[y + shiftingY][x + shiftingX]->getClassCharacter() == '#') {
		score += 50;
		delete entity;
		delete map->getMap()[y + shiftingY][x + shiftingX];
		map->getMap()[y][x] = 0;
		map->getMap()[y + shiftingY][x + shiftingX] = 0;
	}
	else if (entity->getClassCharacter() == '^' && map->getMap()[y + shiftingY][x + shiftingX]->getClassCharacter() == '#') {
		delete entity;
		map->getMap()[y][x] = 0;
	}
}

void GameController::pauseScreen(WINDOW* win, Map* map) {
	mvwaddstr(win, map->getMaxY() / 2, map->getMaxX() / 2, " * PAUSE * ");
	wrefresh(win);
}

void	GameController::displayBackground(WINDOW* win, Map* map) const {
	std::string	stars = ".*";
	for (unsigned int y = 0; y < map->getMaxY(); ++y) {
		for (unsigned int x = 0; x < map->getMaxX(); ++x) {
			mvwaddch(win, y + 1, x + 1, ' ');
		}
	}
	for (unsigned int i = 1; i < map->getMaxY() / 2; ++i) {
		mvwaddch(win, i * 2, map->getBG()[i], stars[map->getBG()[i] % 2]);
	}
}

void	GameController::displayScore(WINDOW* winScore, int score, int life, timeval stime) {
	std::stringstream 	s;
	timeval				tmp;
	int					sec;
	
	gettimeofday(&tmp, NULL);
	sec =  tmp.tv_sec - stime.tv_sec;
	s << "Life : " << life;
	s << " | Time : " << sec;
	s << " | Score : " << score;
	wborder(winScore, 0, 0, 0, 0, 0, 0, 0, 0);
	mvwaddstr(winScore, 1, 1, s.str().c_str());
	wrefresh(winScore);
}

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include <iostream>
#include <string>

class Enemy {

	public :
		Enemy(int hp, std::string const & type);
		virtual ~Enemy(void);
		Enemy(Enemy const &enemy);
		Enemy & operator=(Enemy const &enemy);
		std::string const getType() const;
		int getHP() const;
		Enemy(void);
		virtual void takeDamage(int);
	protected :
		int _hp;
		std::string _type;
};

#endif

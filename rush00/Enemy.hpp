#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include "AGameEntity.hpp"

class Enemy : public AGameEntity {

	public :
		Enemy(void);
		~Enemy(void);
		Enemy(Enemy const &enemy);
		Enemy & operator=(Enemy const &enemy);

		char	getClassCharacter() const;
		unsigned int		getPositionX() const;
		unsigned int		getPositionY() const;
		void				setPositionX(unsigned int x);
		void				setPositionY(unsigned int y);
};
#endif

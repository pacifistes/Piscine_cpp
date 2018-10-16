#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H

#include "AGameEntity.hpp"
#include "Map.hpp"

class Player : public AGameEntity {

	public :
		Player();
		~Player(void);
		Player(Player const &player);
		Player & operator=(Player const &player);

		char				getClassCharacter() const;
		unsigned int		getPositionX() const;
		unsigned int		getPositionY() const;
		void				setPositionX(unsigned int x);
		void				setPositionY(unsigned int y);

	private:
};
#endif

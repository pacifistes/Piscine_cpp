#ifndef GAME_ENTITY_CLASS_H
# define GAME_ENTITY_CLASS_H

#include <string>
#include <iostream>

class AGameEntity {

	public :
		AGameEntity(char c);
		AGameEntity(AGameEntity const &aGameEntity);
		AGameEntity & operator=(AGameEntity const &aGameEntity);
		virtual ~AGameEntity();
		
		virtual char				getClassCharacter() const = 0;
		virtual unsigned int		getPositionX() const = 0;
		virtual unsigned int		getPositionY() const = 0;
		virtual void				setPositionX(unsigned int x) = 0;
		virtual void				setPositionY(unsigned int y) = 0;

	protected :
		AGameEntity();
		char			_classCharacter;
		unsigned int	_positionX;
		unsigned int	_positionY;

};
#endif

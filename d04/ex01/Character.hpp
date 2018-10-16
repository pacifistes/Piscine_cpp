#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

	public :
		Character(std::string const &name);
		Character(void);
		~Character(void);
		Character(Character const &character);
		Character & operator=(Character const &character);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		int getAp() const;
		AWeapon *getEquip() const;



	protected :
		std::string _name;
		AWeapon *_weapon;
		int _ap;
};
std::ostream & operator<<(std::ostream & o, Character const & character);
#endif

#ifndef SUPER_MUTANT_CLASS_H
# define SUPER_MUTANT_CLASS_H

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

	public :
		SuperMutant(void);
		~SuperMutant(void);
		SuperMutant(SuperMutant const &superMutant);
		SuperMutant & operator=(SuperMutant const &superMutant);
		void takeDamage(int damage);
};
#endif

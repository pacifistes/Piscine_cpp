#ifndef RAD_SCORPION_CLASS_H
# define RAD_SCORPION_CLASS_H

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy {

	public :
		RadScorpion(void);
		~RadScorpion(void);
		RadScorpion(RadScorpion const &radScorpion);
		RadScorpion & operator=(RadScorpion const &radScorpion);
};
#endif
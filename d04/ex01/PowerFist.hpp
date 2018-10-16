#ifndef POWER_FIST_CLASS_H
# define POWER_FIST_CLASS_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public :
		PowerFist(void);
		~PowerFist(void);
		PowerFist(PowerFist const &powerFist);
		PowerFist & operator=(PowerFist const &powerFist);
		void attack() const;
};

#endif
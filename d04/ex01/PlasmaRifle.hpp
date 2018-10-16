#ifndef PLASMA_RIFLE_CLASS_H
# define PLASMA_RIFLE_CLASS_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public :
		PlasmaRifle(void);
		~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &plasmaRifle);
		PlasmaRifle & operator=(PlasmaRifle const &plasmaRifle);
		void attack() const;
};

#endif

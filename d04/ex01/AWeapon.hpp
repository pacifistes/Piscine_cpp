#ifndef A_WEAPON_CLASS_H
# define A_WEAPON_CLASS_H

#include <string>

class AWeapon {

	public :
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);
		AWeapon(void);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
	protected :
		std::string _name;
		int _apCost;
		int _damage;
		AWeapon & operator=(AWeapon const &aWeapon);
		AWeapon(AWeapon const &aWeapon);

};

#endif

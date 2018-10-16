#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon &_club;
		std::string _name;

	public:
		HumanA(std::string name, Weapon &club);
		~HumanA(void);
		void attack() const;
};

#endif
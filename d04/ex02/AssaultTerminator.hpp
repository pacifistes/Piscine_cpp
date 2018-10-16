#ifndef ASSAULT_TERMINATOR_CLASS_H
# define ASSAULT_TERMINATOR_CLASS_H

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

	public :
		AssaultTerminator(void);
		~AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &assaultTerminator);
		AssaultTerminator & operator=(AssaultTerminator const &assaultTerminator);
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};
#endif
#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {

	public :
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const &) const;
	private :
		Sorcerer(Sorcerer const &sorcerer);
		Sorcerer & operator=(Sorcerer const &sorcerer);
		Sorcerer(void);
		std::string _name;
		std::string _title;
};
std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer);
#endif

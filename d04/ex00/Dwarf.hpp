#ifndef DWARF_CLASS_H
# define DWARF_CLASS_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Dwarf : public Victim {

	public :
		Dwarf(std::string name);
		~Dwarf(void);
		void getPolymorphed() const;
	private :
		Dwarf(Dwarf const &dwarf);
		Dwarf & operator=(Dwarf const &dwarf);
		Dwarf(void);
};

#endif

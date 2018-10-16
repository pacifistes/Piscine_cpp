#ifndef PEON_CLASS_H
# define PEON_CLASS_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {

	public :
		Peon(std::string name);
		~Peon(void);
		void getPolymorphed() const;
	private :
		Peon(Peon const &peon);
		Peon & operator=(Peon const &peon);
		Peon(void);
};

#endif

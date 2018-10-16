#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

#include <iostream>
#include <string>

class Victim {

	public :
		Victim(std::string name);
		Victim(void);
		~Victim(void);
		std::string getName(void) const;
		virtual void getPolymorphed() const;

	protected :
		std::string _name;
	private :
		Victim & operator=(Victim const &victim);
		Victim(Victim const &victim);
};
std::ostream & operator<<(std::ostream & o, Victim const & victim);
#endif

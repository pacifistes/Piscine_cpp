#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _zombieName;
		std::string	_type;

	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void			setType(std::string type);
		void			setName(std::string name);
		std::string		getType(void) const;
		std::string		getName(void) const;
};

#endif
#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _zombie_name;
		std::string	_type;

	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void ) const;
		void			set_type(std::string type);
		void			set_name(std::string name);
		std::string		get_type(void) const;
		std::string		get_name(void) const;
};

#endif
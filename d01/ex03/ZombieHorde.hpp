#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>


class ZombieHorde {
	private:
		int		_n;
		Zombie *_horde;
		std::string _randomName();

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void	announce(void);
};

#endif
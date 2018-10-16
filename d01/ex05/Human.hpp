#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H
#include "Brain.hpp"

class Human {
	private:
		Brain const _brain;
	public:
		Human(void);
		~Human(void);
		Brain const &getBrain() const;
		std::string identify();
};

#endif
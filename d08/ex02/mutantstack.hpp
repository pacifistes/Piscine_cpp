#ifndef MUTANT_STACK_CLASS_H
# define MUTANT_STACK_CLASS_H

#include <stack>
#include <iterator>

template<typename T = int>
class MutantStack : public std::stack<T> {

	public :
		MutantStack<T>(void) {
			return;
		}

		MutantStack<T>(MutantStack<T> const &mutantStack) {
			*this = mutantStack;
			return;
		}

		~MutantStack<T>(void) {
			return;
		}

		MutantStack<T>	&operator=(MutantStack<T> const &mutantStack) {
			(void)mutantStack;
			return *this;
		}

		// U<T> iterator;	
	private:

};
#endif

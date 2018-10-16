#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {

	public :
		Span(void);
		Span(unsigned int maxElem);
		virtual ~Span(void);
		Span(Span const &span);
		Span & operator=(Span const &span);
		void	addNumber(int Number);
		void	addNumbers(std::vector<int> vectorElems);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
		class TooMuchElemException : public std::exception {
			public:
				virtual ~TooMuchElemException(void) throw();
				TooMuchElemException(TooMuchElemException const &tooMuchElemException) throw();
				Span::TooMuchElemException & operator=(TooMuchElemException const &tooMuchElemException) throw();
				TooMuchElemException(void) throw();
				virtual const char *what() const throw();
		};

		class TooFewElemException : public std::exception {
			public:
				virtual ~TooFewElemException(void) throw();
				TooFewElemException(TooFewElemException const &tooFewElemException) throw();
				Span::TooFewElemException & operator=(TooFewElemException const &tooFewElemException) throw();
				TooFewElemException(void) throw();
				virtual const char *what() const throw();
		};

	private:
		unsigned int _maxElem;
		std::vector<int> _myVector;
};
#endif

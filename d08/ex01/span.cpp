#include "span.hpp"

Span::Span(void) {
	return;
}

Span::Span(unsigned int maxElem) : _maxElem(maxElem) {
	return;
}

Span::Span(Span const &span) {
	*this = span;
	return;
}

Span::~Span(void) {
	return;
}

Span	&Span::operator=(Span const &span) {
	(void)span;
	return *this;
}

void	Span::addNumber(int newElem) {
	if (this->_myVector.size() < this->_maxElem) {
		this->_myVector.push_back(newElem);
		std::sort(this->_myVector.begin(), this->_myVector.end());
	}
	else {
		throw TooMuchElemException();
	}
}


unsigned int	Span::shortestSpan() {
	if (this->_myVector.size() < 2) {
		throw TooFewElemException();
	}
	unsigned int minSpan = 0xffffffff;
	for (std::vector<int>::iterator it = this->_myVector.begin(); it != this->_myVector.end() - 1; it++)
	{
		if (minSpan >  static_cast<unsigned int>(*(it + 1) - *it)) {
			minSpan =  static_cast<unsigned int>(*(it + 1) - *it);
		}
	}
	return minSpan;
}

void	Span::addNumbers(std::vector<int> vectorElems) {
	if (this->_myVector.size() + vectorElems.size() <= this->_maxElem) {
		this->_myVector.insert(this->_myVector.end(), vectorElems.begin(), vectorElems.end());
		std::sort(this->_myVector.begin(), this->_myVector.end());		
	}
	else {
		throw TooMuchElemException();
	}
}

unsigned int		Span::longestSpan() {
	if (this->_myVector.size() < 2) {
		throw TooFewElemException();
	}
	int min = *std::min_element(this->_myVector.begin(), this->_myVector.end());
	int max = *std::max_element(this->_myVector.begin(), this->_myVector.end());
	return  static_cast<unsigned int>(max - min);
}

/*
**	TooMuchElemException
*/

Span::TooMuchElemException::~TooMuchElemException(void) throw() {
	return;
}

Span::TooMuchElemException::TooMuchElemException(TooMuchElemException const &tooMuchElemException) throw() {
	*this = tooMuchElemException;
	return;
}

Span::TooMuchElemException &Span::TooMuchElemException::operator=(TooMuchElemException const &tooMuchElemException) throw() {
	(void)tooMuchElemException;
	return *this;
}

Span::TooMuchElemException::TooMuchElemException(void) throw() {
	return;
}

const char	*Span::TooMuchElemException::what() const throw() {
	return("You can't add more elements in this span");
}

/*
**	TooFewElemException
*/

Span::TooFewElemException::~TooFewElemException(void) throw() {
	return;
}

Span::TooFewElemException::TooFewElemException(TooFewElemException const &tooFewElemException) throw() {
	*this = tooFewElemException;
	return;
}

Span::TooFewElemException &Span::TooFewElemException::operator=(TooFewElemException const &tooFewElemException) throw() {
	(void)tooFewElemException;
	return *this;
}

Span::TooFewElemException::TooFewElemException(void) throw() {
	return;
}

const char	*Span::TooFewElemException::what() const throw() {
	return("too few elements for find the shortestSpan or the longestSpan.");
}


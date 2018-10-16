#include <exception>

template <typename T = int>
class Array {
	public:
	Array<T>(void) : _content(new T[0]), _nbrElem(0) {
		return;
	}

	Array<T>(unsigned int n) : _content(new T[n]), _nbrElem(n) {
		return;
	}

	Array<T>(Array<T> const & content) {
		*this = content;
	}

	Array<T>	&operator=(Array<T> const &array) {
		this->_nbrElem = array.size();
		this->_content = new T[array.size()];
		unsigned int i = 0;
		while (i < array.size()) {
			this->_content[i] = array._content[i];
			i++;
		}
		return *this;
	}

	T	&operator[](int const &index) {
		if (index < 0 || index >= static_cast<int>(size())) {
			throw std::exception();
		}
		return this->_content[index];
	}

	~Array<T>(void) {
		delete [] this->_content;
	}

	unsigned int	size() const {
		return this->_nbrElem;
	}

	private:
		T*				_content;
		unsigned int	_nbrElem;
};
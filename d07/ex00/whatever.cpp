#include <iostream>

template<typename T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T &min(T &a, T &b) {
	if (a == b) {
		return b;
	}
	return ((a < b) ? a : b);
}

template<typename T>
T &max(T &a, T &b) {
	if (a == b) {
		return b;
	}
	return ((a > b) ? a : b);
}

int main(void) {
	int a = 21;
	int b = 42;
	std::cout << "max of " << a << " and " << b << " explicit is ";
	std::cout << ::max<int>(a, b) << std::endl;//Explicite
	std::cout << "max of " << a << " and " << b << " implicit is ";
	std::cout << ::max(a, b) << std::endl;//Explicite
	
	float c = -1.7f;
	float d = 4.2f;	
	std::cout << "max of " << c << " and " << d << " explicit is ";
	std::cout << ::max<float>(c, d) << std::endl;
	std::cout << "max of " << c << " and " << d << " implicit is ";
	std::cout << ::max(c, d) << std::endl;

	double e = -1.545454544547;
	double f = 4.2454554545544;
	std::cout << "max of " << e << " and " << f << " explicit is ";
	std::cout << ::max<double>(e, f) << std::endl;
	std::cout << "max of " << e << " and " << f << " implicite is ";
	std::cout << ::max(e, f) << std::endl;


	std::cout << "min of " << a << " and " << b << " explicit is ";
	std::cout << ::min<int>(a, b) << std::endl;//Explicite
	std::cout << "min of " << a << " and " << b << " implicit is ";
	std::cout << ::min(a, b) << std::endl;//Explicite
	
	std::cout << "min of " << c << " and " << d << " explicit is ";
	std::cout << ::min<float>(c, d) << std::endl;
	std::cout << "min of " << c << " and " << d << " implicit is ";
	std::cout << ::min(c, d) << std::endl;

	std::cout << "min of " << e << " and " << f << " explicit is ";
	std::cout << ::min<double>(e, f) << std::endl;
	std::cout << "min of " << e << " and " << f << " implicite is ";
	std::cout << ::min(e, f) << std::endl;


	std::cout << "swap of a :" << a << " and b :" << b << " explicit is ";
	::swap<int>(a, b);//Explicite
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "swap of a : " << a << " and b :" << b << " implicit is ";
	::swap(a, b);//Explicite
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "swap of c:" << c << " and d:" << d << " explicit is ";
	::swap<float>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "swap of c:" << c << " and d:" << d << " implicit is ";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "swap of e:" << e << " and f:" << f << " explicit is ";
	::swap<double>(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;

	std::cout << "swap of e:" << e << " and f:" << f << " implicite is ";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
}
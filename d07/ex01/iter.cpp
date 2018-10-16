#include <iostream>

template<typename T>
void iter(T *array, int lenght, void (f)(T&)) {
	int i = 0;
	if (!array)
		return;
	while (i < lenght) {
		f(array[i]);
		i++;
	}
}


template<typename T>
void printElem(T &a) {
	std::cout << "affichage de l'element du tableau : " << a << std::endl;
}

void	incremente(int &a) {
	a += 1;
}

int main(void) {
	char a[3] = {'a', 'b', 'c'};
	iter(a, 3, printElem);

	int b[5] = { 1, 2, 3, 4, 5};
	iter(b, 5, incremente);
	iter(b, 5, printElem);

	float c[4] = { 1.1f, 2.2f, 3.3f, 4.4f};
	iter(c, 4, printElem);
}


// template<typename T>
// void iter(T *array, int lenght, void (f)(const T&)) {
// 	int i = 0;
// 	if (!array)
// 		return;
// 	while (i < lenght) {
// 		f(array[i]);
// 		i++;
// 	}
// }

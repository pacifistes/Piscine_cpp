#include <iostream>

void	to_upper(char *str) {
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i]) {
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
}

void	print_loud() {
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

int		main(int ac, char **av) {
	int i;

	i = 1;
	if (ac == 1)
		print_loud();
	else {
		while (i < ac) {
			to_upper(av[i]);
			i++;
		}
	}
	std::cout << std::endl;
}
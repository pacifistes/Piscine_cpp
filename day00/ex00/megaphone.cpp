#include <iostream>

void	to_upper(char *str) {
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	std::cout << str;
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
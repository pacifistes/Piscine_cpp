#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av)
{
	std::size_t i;
	i = 0;	
	if (ac == 4) {
		std::string fileName = std::string(av[1]) + std::string(".replace");
		std::ifstream ifs(av[1]);
		if (ifs.is_open()) {
			std::string s1(av[2]);
			std::string s2(av[3]);
			std::stringstream sstream;
			sstream << ifs.rdbuf();
			std::string str(sstream.str());
			while ((i = str.find(s1, i)) != std::string::npos) {
				str.replace(i, s1.length(), s2);
				i += s2.length();
			}
			ifs.close();
			std::ofstream ofs(fileName);
			if (ofs.is_open()) {
				ofs << str;
				ofs.close();
			}
			else {
				std::cout << "usage : ./a.out [filename] [str to replace] [s2]" << std::endl;
			}
		}
		else {
			std::cout << "usage : ./a.out [filename] [str to replace] [s2]" << std::endl;
		}
	}
	else {
		std::cout << "usage : ./a.out [filename] [str to replace] [s2]" << std::endl;
	}
	return (0);
}
#include "Logger.hpp"

int main() {
	Logger logger = Logger("file");
	logger.log("file", "Salut comment ca va ?");
	logger.log("notTheGoodFile", "Bien et toi ?");
	logger.log("file", "Moi ca va super");

	return (0);
}
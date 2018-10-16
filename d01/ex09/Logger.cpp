#include "Logger.hpp"

Logger::Logger(std::string fileName) : _fileName(fileName) {
	std::cout << "Logger constructor called with fileName : " << this->_fileName;
	std::cout <<  std::endl;
	return;
}

Logger::~Logger (void) {
	std::cout << "Logger destructeur called" << std::endl;
	return;
}

void Logger::log(std::string const & dest, std::string const & message) const {
	std::cout << "Log function call with file dest [" << dest << "]" << std::endl;
	void (Logger::*arrayOfPointer[2])(std::string const &message) const = {&Logger::logToConsole, &Logger::logToFile};
	if (dest == this->_fileName) {
		(this->*arrayOfPointer[1])(message);
	}
	else {
		(this->*arrayOfPointer[0])(message);
	}
}

void Logger::logToConsole(std::string const &message) const {
	std::cout << "logToConsole function called" << std::endl;
	std::cout << makeLogEntry(message) << std::endl;
}

void Logger::logToFile(std::string const &message) const {
	std::cout << "logToFile function called" << std::endl;
	std::ofstream ofs(this->_fileName, std::ofstream::app|std::ofstream::out);
	if (ofs.is_open()) {
		ofs << makeLogEntry(message) << std::endl;
		ofs.close();
	}
	else {
		std::cout << "don't arrive to open the file. redirection to console :" << std::endl;
		logToConsole(message);
	}
}

std::string Logger::makeLogEntry(std::string message) const {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer, 80, "[%Y-%m-%d %H:%M:%S] -> ", timeinfo);
	std::string finalMessage = buffer + message;

	return (finalMessage);
}

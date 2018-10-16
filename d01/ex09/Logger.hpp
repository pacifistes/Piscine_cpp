#ifndef LOGGER_CLASS_H
# define LOGGER_CLASS_H

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

class Logger {
	public:
		Logger(std::string fileName);
		~Logger(void);
		void log(std::string const & dest, std::string const & message) const;
	private:
		std::string _fileName;
		void logToConsole(std::string const &str) const;
		void logToFile(std::string const &str) const;
		std::string makeLogEntry(std::string message) const;
};

#endif
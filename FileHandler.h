#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>

enum Intent
{
	WRITE,
	READ,
	APPEND,
};

class FileHandler
{
private:
	std::string fileName;

	std::ofstream outFile;
	std::ifstream inFile;

public:

	FileHandler(std::string, Intent);

	void createFile(std::string);
	void getFileName();

	void writeToFile(std::string);
};

#endif
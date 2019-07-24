#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

enum Mode
{
	WRITE,
	READ,
	APPEND,
};

class FileHandler
{
private:
	std::string fileName;

	std::ofstream oFile;
	std::ifstream iFile;
    
    Mode mode;


public:

	FileHandler(std::string, Mode);
    bool exists();
	void closeFile();

	std::string getFileName();
    
    bool write(std::string);

	bool append(std::string);
	bool appendLine(std::string);

	std::string read();
    std::string readLine(unsigned int);
};

#endif

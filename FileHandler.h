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
	std::vector<std::string> dataBuffer;

	std::ofstream oFile;
	std::ifstream iFile;
    std::fstream stream;


public:

	FileHandler(std::string, Mode);
	void closeFile();

	std::string getFileName();
    bool exists(std::ifstream);
    bool exists(std::ofstream);
    bool exists(std::fstream);

	/* 
		void append() will be the only way to input data into a file
	*/
	void append(int);
	void append(std::string);
	void append(char);

	void appendLine(int);
	void appendLine(std::string);
	void appendLine(char);

	std::string read();
};

#endif

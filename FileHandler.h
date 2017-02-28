#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

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
	std::vector<std::string> dataBuffer;

	std::ofstream oFile;
	std::ifstream iFile;


public:

	FileHandler(std::string, Intent);
	void closeFile();

	std::string getFileName();

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
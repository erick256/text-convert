#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>

class FileHandler
{
public:

	enum Intent
	{
		WRITE;
		READ;
		APPEND;
	};

	FileHandler(std::string, Intent i);

	void createFile(std::string);
	void getFileName();

	void writeToFile(std::string);

	std::string readFile(std::ofstream);


private:
	const std::string fileName;
};

#endif
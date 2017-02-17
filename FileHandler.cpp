#include "FileHandler.h"

FileHandler::FileHandler(std::string fileName_, Intent i)
{
	fileName = fileName_;

	if(i == WRITE)
	{
		inFile.open(fileName, std::ifstream::in);
	}

	else if(i == READ)
	{
		outFile.open(fileName, 
			std::ofstream::out | std::ofstream::app);
	}

	else if(i == APPEND)
	{
		inFile.open(fileName, std::ifstream::in);
	}

	else
	{
		// Throw error
	}
}

void FileHandler::createFile(std::string fileName)
{
	std::ofstream file(fileName);
	file.open();
	file.close();
}

void FileHandler::getFileName()
{
	return fileName;
}

void FileHandler::writeLine(std::string data)
{
	iFile << data << std::endl;
}

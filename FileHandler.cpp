#include "FileHandler.h"

FileHandler::FileHandler(std::string fileName_, Intent i)
{
	fileName = fileName_;

	if(i == WRITE)	// Will overwrite any previous data in file, use APPEND to add data at end of file.
	{
		oFile.open(fileName);
	}

	else if(i == READ)
	{
		iFile.open(fileName, 
			std::ofstream::out | std::ofstream::in);
	}

	else if(i == APPEND)	
	{
		oFile.open(fileName, std::ifstream::app);
	}
}

void FileHandler::closeFile()
{
	oFile.close();
}

std::string FileHandler::getFileName()
{
	return fileName;
}

void FileHandler::append(int data)
{
	if (oFile.is_open())
	{
		oFile << data;
	}

	else
	{
		std::cout << "ERROR: The file " << fileName << " is not open!" << std::endl;
	}
}

void FileHandler::append(std::string data)
{
	if (oFile.is_open())
	{
		oFile << data;
	}

	else
	{
		std::cout << "ERROR: The file " << fileName << " is not open!" << std::endl;
	}
}

void FileHandler::append(char data)
{
	if (oFile.is_open())
	{
		oFile << data;
	}

	else
	{
		std::cout << "ERROR: The file " << fileName << " is not open!" << std::endl;
	}
}

std::string FileHandler::read()
{
	if (iFile.is_open())
	{
		// TODO: Finish design for read
	}

	else
	{
		std::cout << "ERROR: The file " << fileName << " is not open!" << std::endl;
	}
}

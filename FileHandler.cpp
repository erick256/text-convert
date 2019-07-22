#include "FileHandler.h"

FileHandler::FileHandler(std::string fileName_, Mode i)
{
	fileName = fileName_;

	if(i == WRITE)	// Will overwrite any previous data in file, use APPEND to add data at end of file.
	{
        oFile.open(fileName, std::ios::in);
        std::cout << oFile.is_open() << std::endl;;
		std::cout << fileName << " is in WRITE mode" << std::endl;
	}

	else if(i == READ)
	{
		iFile.open(fileName, std::ios::out);
        std::cout << fileName << " is in READ mode" << std::endl;
	}

	else if(i == APPEND)	
	{
        iFile.open(fileName, std::ios::app);
		std::cout << fileName << " is in APPEND mode" << std::endl;
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
		std::cout << "ERROR: The file, " << fileName << ", is not open!" << std::endl;
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
		std::cout << "ERROR: The file, " << fileName << ", is not open!" << std::endl;
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
		std::cout << "ERROR: The file, " << fileName << ", is not open!" << std::endl;
	}
}

std::string FileHandler::readLine()	// std::getline moves onto the next
									// ln without the use of for loops
{
	std::string data = "";

	if (iFile.is_open())
	{
		std::getline(iFile, data);
	}

	else
	{
		std::cout << "ERROR: The file, " << fileName << ", is not open!" << std::endl;
	}
    
    return data;
}

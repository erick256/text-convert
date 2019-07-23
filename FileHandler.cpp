#include "FileHandler.h"

FileHandler::FileHandler(std::string fileName_, Mode i)
{
	fileName = fileName_;
    iFile.open(fileName);
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

std::string FileHandler::read() // reads entire file into a single string variable
{
	std::string data = "";
    std::string buffer;

	if (iFile.is_open())
	{
        while(std::getline(iFile, buffer))
        {
            data += buffer;
        }
	}

	else
	{
		std::cout << "ERROR: The file, " << fileName << ", is not open!" << std::endl;
	}
    
    return data;
}

std::string FileHandler::readLine(unsigned int line) // line starts at 1
{
    std::string buffer;
    std::string lineData = "";
    
    bool endOfFile = true;;
    
    int counter = 0;
    
    while(std::getline(iFile, buffer))
    {
        counter++;
        
        if(counter == line)
        {
            lineData = buffer;
            endOfFile = false;
            break;
        }
    }
    
    if(endOfFile)
    {
        std::cout << "End of file. No line found." << std::endl;
    }
    
    return lineData;
}

#include "FileHandler.h"

FileHandler::FileHandler(std::string fileName_, Mode mode_)
{
	fileName = fileName_;
    mode = mode_;
    if(mode == READ)
    {
        std::cout << "The file, " << fileName << ", is in READ mode!" << std::endl;
        iFile.open(fileName);
    }
    else if(mode == WRITE)
    {
        std::cout << fileName << " is in WRITE mode!" << std::endl;
        oFile.open(fileName);
    }
    
    else
    {
        std::cout << fileName << " is in APPEND mode!" << std::endl;
        oFile.open(fileName, std::ios::app);
    }
}

bool FileHandler::exists()
{
    bool exists = false;
    if(mode == READ)
    {
        if(iFile)
        {
            exists = true;
        }
    }
    
    else
    {
        if(oFile)
        {
            exists = true;
        }
    }
    
    return exists;
}

void FileHandler::closeFile()
{
	if(mode == READ)
    {
        iFile.close();
    }
    
    else
    {
        oFile.close();
    }
}

std::string FileHandler::getFileName()
{
	return fileName;
}

bool FileHandler::write(std::string input) // will output boolean to indicate if function worked completely
{
    bool taskComplete = false;
    
    if(oFile.is_open())
    {
        if(mode == WRITE)
        {
            oFile << input;
            taskComplete = true;
        }
    }
    else
    {
        std::cout << "ERROR: The file, " << fileName << " is not in WRITE mode!";
    }
    return taskComplete;
}

bool FileHandler::append(std::string input)
{
    bool taskComplete = false;
    
    if(oFile.is_open())
    {
        if(mode == APPEND)
        {
            oFile << input;
            taskComplete = true;
        }
    }
    
    else
    {
        std::cout << "ERROR: The file, " << fileName << " is not in APPEND mode!";
    }
    
    return taskComplete;
}

bool FileHandler::appendLine(std::string input)
{
    bool taskComplete = false;
    
    if(oFile.is_open())
    {
        if(mode == APPEND)
        {
            oFile << input << std::endl;
            taskComplete = true;
        }
    }
    
    else
    {
        std::cout << "ERROR: The file, " << fileName << " is not in APPEND mode!";
    }
    
    return taskComplete;
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
		std::cout << "ERROR: The file, " << fileName << ", is not in READ mode!" << std::endl;
	}
    
    return data;
}

std::string FileHandler::readLine(unsigned int line) // line starts at 1
{
    std::string buffer;
    std::string lineData = "";
    
    bool endOfFile = true;
    
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

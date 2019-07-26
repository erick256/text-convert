#include "ASCII.h"

ASCII::ASCII(std::string fileName_)
{
    fileName = fileName_;
}

bool ASCII::convert()
{
    bool taskCompleted = false;
    
    if(isConverted())
    {
        std::cout << "File is already converted to ASCII." << std::endl;
    }
    else
    {
        FileHandler file1(fileName, READ);
        std::string fileData = file1.read();
        file1.closeFile();
        
        FileHandler file2(fileName, WRITE); // deletes the contents of the file
        file2.closeFile();
        
        std::string buffer = "";
        
        for(char c : fileData)
        {
                int character = c;
                std::string number = std::to_string(character);
                buffer += number + " ";
        }
        
        FileHandler file3(fileName, APPEND);
        file3.append(buffer);
        file3.closeFile();
        
        taskCompleted = true;
    }
    
    return taskCompleted;
}

bool ASCII::isConverted()
{
    bool isConverted = false;
    
    FileHandler file(fileName, READ);
    std::string lineData = file.readLine(1);
    file.closeFile();
    
    
    
    return isConverted;
}

bool ASCII::revert()
{
    bool taskCompleted = false;
    
    FileHandler file1(fileName, READ);
    std::string data = file1.read();
    file1.closeFile();
    
    std::string bufferedLetter = "";
    std::string bufferedFile = "";
    
    for(char c : data)
    {
        if(c != (char) 32)
        {
            bufferedLetter += c;
        }
        
        else
        {
            int charNumber = std::stoi(bufferedLetter);
            char letter = charNumber;
            bufferedFile += letter;
            bufferedLetter = "";
        }
    }
    
    FileHandler file2(fileName, WRITE);
    file2.closeFile();
    
    FileHandler file3(fileName, APPEND);
    file3.append(bufferedFile);
    file3.closeFile();
    
    
    return taskCompleted;
}

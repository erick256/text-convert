#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "FileHandler.h"

#ifndef ASCII_H
#define ASCII_H

class ASCII
{
public:
    ASCII(std::string);
	
    bool convert();
    bool isConverted();
    
    bool revert();

private:
    std::string fileName;
	std::vector<int> buffer;
	std::string data;
};


#endif

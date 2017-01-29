#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#ifndef ASCII_H
#define ASCII_H

class ASCII
{
public:
	ASCII(std::string);
	
	int getElementSize();
	int getElement(int);

	char toChar(int);

private:
	std::vector<int> buffer;
};


#endif
#include "ASCII.h"

ASCII::ASCII(std::string s)
{
	for(int x = 0; x < s.length(); x++)
	{
		char c = s[x];
		int ascii = c;

		buffer.push_back(ascii);
	}
}

int ASCII::getElement(int element)
{
	return buffer[element];
}

int ASCII::getElementSize()
{
	return buffer.size();
}

char ASCII::toChar(int value)
{
	char c = value;

	return c;
}
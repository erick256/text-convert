#include "Menu.h"
#include "ASCII.h"
#include "FileHandler.h"

void test();
void asciiTest();
void toASCII();

int main()
{
	toASCII();
}

void test()
{
}

void toASCII()
{
		std::string message;
		std::getline(std::cin, message);

		ASCII code(message);

		for(int x = 0; x != code.getElementSize(); x++)
		{
			int c = code.getElement(x);
			std::cout << c << " ";
		}	

	std::cout << std::endl;
}

void concatenateInt(int interval, int data)	//	das interval = wie viel soll den nummer sein
{

}

#include "Menu.h"

int Menu::promptMainMenu()
{
	int choice;

	const std::string menuTitle = "Text Converter";
	const int length = menuTitle.length();

	const std::string menuMessage = "Choose an option to begin";
	const int length2 = menuMessage.length();

	for(int x = 0; x != length; x++)
	{
		std::cout << "*";
	}

	std::cout << "" << std::endl;
	std::cout << menuTitle << std::endl;

	for(int x = 0; x != length; x++)
	{
		std::cout << "*";
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << menuMessage << std::endl;

	for(int x = 0; x != length2; x++)
	{
		std::cout << "-";
	}

	std::cout << std::endl;

	std::cout << "1. Create new entry" << std::endl;
	std::cout << "2. Decrypt entry" << std::endl;
	std::cout << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << std::endl;

	std::cout << "Choice: ";
	std::cin >> choice;

	return choice;
}




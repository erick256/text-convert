#include "Menu.h"
#include "ASCII.h"
#include "FileHandler.h"

int main()
{
	/*Menu menu;

	int choice = menu.promptMainMenu();

	if(choice == 1)
	{
		
	}

	else if(choice == 2)
	{

	}

	else
	{
		std::cout << "Terminating program..." << std::endl;
	}*/

	 
	/*TODO
		Finish FileHandler.cpp and .h
	*/

	FileHandler file("testen.txt", WRITE);

	file.closeFile();

}

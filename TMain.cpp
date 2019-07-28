#include "Menu.h"
#include "ASCII.h"
#include "FileHandler.h"
#include <fstream>
#include <numeric>

void test();
void asciiTest();
void toASCII();

int main()
{
    // example code to turn text into ASCII
    ASCII file("test.txt");
    file.convert();
    
    // converts ASCII back to text
    // WARNING: using revert() again after a file has been already been converted from ASCII to normal text will wipe the data
    file.revert();
}

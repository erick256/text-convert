debug: TMain.o Menu.o ASCII.o FileHandler.o
	g++ TMain.o Menu.o ASCII.o FileHandler.o -o debug
	rm *.o

TMain.o:
	g++ -c TMain.cpp -std=c++11

MainMenu.o:
	g++ -c Menu.cpp -std=c++11

ASCII.o:
	g++ -c ASCII.cpp -std=c++11

FileHandler.o:
	g++ -c FileHandler.cpp -std=c++11


clean:
	rm *.o debug
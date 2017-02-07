debug: TMain.o Menu.o ASCII.o FileHandler.o
	g++ TMain.o Menu.o ASCII.o FileHandler.o -o debug
	rm *.o

TMain.o:
	g++ -c TMain.cpp

MainMenu.o:
	g++ -c Menu.cpp

ASCII.o:
	g++ -c ASCII.cpp

FileHandler.o:
	g++ -c FileHandler.cpp


clean:
	rm *.o debug
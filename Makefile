debug: TMain.o Menu.o ASCII.o
	g++ TMain.o Menu.o ASCII.o -o debug

TMain.o:
	g++ -c TMain.cpp

MainMenu.o:
	g++ -c Menu.cpp

ASCII.o:
	g++ -c ASCII.cpp


clean:
	rm *.o debug
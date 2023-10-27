CXX = x86_64-w64-mingw32-g++
br: clean compilar ejecutar

compilar: scr/Juego.cpp
	$(CXX) scr/Juego.cpp -o bin/humanos -I include

ejecutar: bin/Juego
	./bin/Juego

clean: bin/Juego
	rm bin/Juego

bin/Juego : src/Juego.cpp include/*
	c++ src/Juego.cpp -o bin/Juego -lcurses -I include

run : bin/Juego
	./bin/Juego
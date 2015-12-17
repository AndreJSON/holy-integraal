.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = world.o area.o open-area.o connection.o

game.out: src/game.hpp src/game.cpp $(OBJS)
	$(CC) $(FLAGS) -o game.out src/game.cpp $(OBJS)
	@echo "----------DONE!----------"

world.o: src/world.hpp src/world.cpp
	$(CC) $(FLAGS) -c src/world.cpp

area.o: src/area.hpp src/area.cpp
	$(CC) $(FLAGS) -c src/area.cpp

open-area.o: area.o src/open-area.hpp src/open-area.cpp
	$(CC) $(FLAGS) -c src/open-area.cpp

connection.o: area.o src/connection.hpp src/connection.cpp
	$(CC) $(FLAGS) -c src/connection.cpp
	
clean:
	rm -f *.o *.out

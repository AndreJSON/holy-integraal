.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = world.o area.o open-area.o connection.o

game.out: game.hpp game.cpp $(OBJS)
	$(CC) $(FLAGS) -o game.out game.cpp $(OBJS)
	@echo "----------DONE!----------"

world.o: world.hpp world.cpp
	$(CC) $(FLAGS) -c world.cpp

area.o: area.hpp area.cpp
	$(CC) $(FLAGS) -c area.cpp

open-area.o: area.o open-area.hpp open-area.cpp
	$(CC) $(FLAGS) -c open-area.cpp

connection.o: area.o connection.hpp connection.cpp
	$(CC) $(FLAGS) -c connection.cpp
	
clean:
	rm -f *.o *.out

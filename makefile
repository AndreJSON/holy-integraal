.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = world.o area.o

game.out: game.hpp game.cpp world.hpp area.hpp $(OBJS)
	$(CC) $(FLAGS) -o game.out game.cpp $(OBJS)
	@echo "----------DONE!----------"

world.o:
	$(CC) $(FLAGS) -c world.cpp

area.o:
	$(CC) $(FLAGS) -c area.cpp
	
clean:
	rm -f *.o *.out

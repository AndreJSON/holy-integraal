.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = world.o area.o

game.out: game.hpp game.cpp world.hpp area.hpp $(OBJS)
	$(CC) $(FlAGS) -o game.out game.cpp $(OBJS)
	@echo "----------DONE!----------"

world.o:
	$(CC) $(FlAGS) -c world.cpp

area.o:
	$(CC) $(FlAGS) -c area.cpp

clean:
	rm -f *.o *.out
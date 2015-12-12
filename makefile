.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = area.o

game.out: game.hpp game.cpp area.hpp $(OBJS)
	$(CC) $(FlAGS) -o game.out game.cpp area.o
	@echo "----------DONE!----------"

area.o:
	$(CC) $(FlAGS) -c area.cpp

clean:
	rm -f *.o *.out
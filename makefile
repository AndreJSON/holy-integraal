.DEFAULT_GOAL := game.out
CC = g++
FLAGS = -std=c++11 -Wall -Wextra
OBJS = world.o item.o cluescroll.o artifact.o actor.o advisor.o riddler.o mathematician.o area.o open-area.o connection.o

game.out: src/game.hpp src/game.cpp $(OBJS)
	$(CC) $(FLAGS) -o game.out src/game.cpp $(OBJS)
	rm -f $(OBJS)
	@echo "----------DONE!----------"

world.o: src/world.hpp src/world.cpp
	$(CC) $(FLAGS) -c src/world.cpp

item.o: src/item.hpp src/item.cpp
	$(CC) $(FLAGS) -c src/item.cpp

cluescroll.o: item.o src/cluescroll.hpp src/cluescroll.cpp
	$(CC) $(FLAGS) -c src/cluescroll.cpp

artifact.o: item.o src/artifact.hpp src/artifact.cpp
	$(CC) $(FLAGS) -c src/artifact.cpp

actor.o: src/actor.hpp src/actor.cpp
	$(CC) $(FLAGS) -c src/actor.cpp

advisor.o: actor.o src/advisor.hpp src/advisor.cpp
	$(CC) $(FLAGS) -c src/advisor.cpp

riddler.o: advisor.o src/riddler.hpp src/riddler.cpp
	$(CC) $(FLAGS) -c src/riddler.cpp

mathematician.o: actor.o src/mathematician.hpp src/mathematician.cpp
	$(CC) $(FLAGS) -c src/mathematician.cpp

area.o: src/area.hpp src/area.cpp
	$(CC) $(FLAGS) -c src/area.cpp

open-area.o: area.o src/open-area.hpp src/open-area.cpp
	$(CC) $(FLAGS) -c src/open-area.cpp

connection.o: area.o src/connection.hpp src/connection.cpp
	$(CC) $(FLAGS) -c src/connection.cpp
	
clean:
	rm -f *.o *.out

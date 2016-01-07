#pragma once
#include "world.hpp"
#include <iostream>
#include <stdio.h>

namespace qhi {
	int handleOptions(World &w); //returns 0 if everything went as it should
	void printInfo(World &w);
	void introduce();
	void endGame();
	int getInput(int);
	void fillWorld(World &w);
}
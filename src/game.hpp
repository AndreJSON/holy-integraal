#pragma once
#include "area.hpp"
#include "world.hpp"
#include <iostream>
#include <stdio.h>

namespace qhi {
	void handleOptions(World &w);
	void introduce();
	void endGame();
	int getInput(int);
	void fillWorld(World &w);
}
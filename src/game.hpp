#pragma once
#include "area.hpp"
#include "world.hpp"
#include <iostream>
#include <stdio.h>

namespace qhi {
	void handleOptions(Area **a);
	void introduce();
	int getInput(int);
	void fillWorld(World &w);
}
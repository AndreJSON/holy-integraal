#pragma once
#include "area.hpp"
#include "world.hpp"
#include <iostream>

namespace qhi {
	void introduce();
	std::string getInput();
	void fillWorld(World &w);
}
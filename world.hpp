#pragma once
#include "area.hpp"
#include <list>

namespace qhi {
	class World {
	private:
		std::list<Area> areas;
	public:
		World();
		~World();
	};
}
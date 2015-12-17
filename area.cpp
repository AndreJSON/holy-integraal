#include "area.hpp"

qhi::Area::Area(std::string desc) {
	description = desc;
}

qhi::Area::~Area() {	
}

std::string qhi::Area::getDescription () const {
	return description;
}

qhi::Area& qhi::Area::getNeighbour(int direction) const {
	auto n = neighbours.find(direction);
	if(n != neighbours.end())
		return *(n->second);
	throw std::out_of_range("Tried to access area in an invalid direction.");
}

void qhi::Area::addNeighbour(Area* ap, int direction) {
	if(permittedDirection(direction)) {
		neighbours[direction] = ap;
	} else {
		throw std::out_of_range("Tried to add neighbouring area to an invalid direction.");
	}
}
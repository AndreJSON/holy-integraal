#include "area.hpp"

qhi::Area::Area(std::string desc) {
	description = desc;
	hasActor = false;
}

qhi::Area::~Area() {	
}

std::string qhi::Area::getDescription (int playerIQ) const {
	return description + (existsActor()? getActor().getDescription(playerIQ):"");
}

bool qhi::Area::existsNeighbour (int direction) const {
	auto n = neighbours.find(direction);
	if(n != neighbours.end())
		return true;
	return false;
}

qhi::Area* qhi::Area::getNeighbour(int direction) const {
	auto n = neighbours.find(direction);
	if(n != neighbours.end())
		return n->second;
	throw std::out_of_range("Tried to access area in an invalid direction.");
}

void qhi::Area::addNeighbour(Area* ap, int direction) {
	if(permittedDirection(direction)) {
		neighbours[direction] = ap;
	} else {
		throw std::out_of_range("Tried to add neighbouring area to an invalid direction.");
	}
}

bool qhi::Area::existsActor() const {
	return hasActor;
}

const qhi::Actor& qhi::Area::getActor() const {
	if(!hasActor)
		throw std::out_of_range("Tried to get actor from an area that doesn't have an actor.");
	return *npc;
}

void qhi::Area::setActor(Actor *ap) {
	hasActor = true;
	npc = ap;
}
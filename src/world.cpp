#include "world.hpp"

qhi::Area* qhi::World::getStartingArea() const {
	if(!areas.empty()) {
		return areas.front();
	}
	throw std::out_of_range("Tried to get starting area from empty world.");
}

qhi::World::World() {
	iq = 0;
}

qhi::World::~World() {
	for(auto &a : areas)
		delete a;
	for(auto &a : actors)
		delete a;
}

void qhi::World::addArea(int type, std::string desc){
	Area *p;
	if(type == 1) {
		p = new OpenArea(desc);
	}
	else if(type == 2) {
		p = new Connection(desc);
	}
	else {
		throw std::invalid_argument("Tried to add area of invalid type.");
	}
	areas.push_back(p);
}

void qhi::World::attachAreas(int index1, int index2, int direction1, int direction2){
	if(!areas[index1]->permittedDirection(direction1) || !areas[index2]->permittedDirection(direction2))
		throw std::invalid_argument("Tried to attach areas in invalid directions");
	areas[index1]->addNeighbour(areas[index2], direction1);
	areas[index2]->addNeighbour(areas[index1], direction2);
}

void qhi::World::addAdvisor(int index, std::string description, std::string advice) {
	actors.push_back(new Advisor(description, advice)); 
	areas[index]->setActor(actors.back());
}

void qhi::World::addRiddler(int index, std::string description, std::string advice, std::string riddle) {
	actors.push_back(new Riddler(description, advice, riddle)); 
	areas[index]->setActor(actors.back());
}

void qhi::World::arrangeWorld() {
	a = getStartingArea();
}

qhi::Area* qhi::World::getCurrentArea() const {
	return a;
}

void qhi::World::setCurrentArea(Area *p) {
	a = p;
}

int qhi::World::getIQ() const {
	return iq;
}

void qhi::World::increaseIQ(int amount) {
	iq += amount;
}

bool qhi::World::finalAreaReached() const {
	if (getCurrentArea() == areas.back())
		return true;
	return false;
}
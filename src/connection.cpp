#include "connection.hpp"

qhi::Connection::Connection(std::string desc) : Area(desc) {
}

qhi::Connection::~Connection() {
}

std::string qhi::Connection::getDescription(int playerIQ) const {
	return Area::getDescription(playerIQ) /*+ guardianAlive? guardian.getDescription() : ""*/; 
}

int qhi::Connection::getAreaType() const {
	return 2;
}

std::vector<std::string> qhi::Connection::getMovementDirections() const {
	return {"Go towards home", "Go past the guard"};
}

bool qhi::Connection::permittedDirection(int direction) const {
	if(direction == 1 || direction == 2)
		return true;
	else
		return false;
}
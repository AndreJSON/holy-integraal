#include "connection.hpp"

qhi::Connection::Connection(std::string desc) : Area(desc) {
	guardianDefeated = false;
}

qhi::Connection::~Connection() {
}

std::string qhi::Connection::getDescription() const {
	return Area::getDescription() /*+ guardianAlive? guardian.getDescription() : ""*/; 
}

int qhi::Connection::getAreaType() const {
	return 2;
}

bool qhi::Connection::permittedDirection(int direction) const {
	if(direction == 1 || direction == 2)
		return true;
	else
		return false;
}
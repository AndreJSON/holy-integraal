#include "open-area.hpp"

qhi::OpenArea::OpenArea(std::string desc) : Area(desc) {
}

qhi::OpenArea::~OpenArea() {
}

int qhi::OpenArea::getAreaType() const {
	return 1;
}

bool qhi::OpenArea::permittedDirection(int direction) const {
	if(direction >= 1 && direction <= 4 )
		return true;
	else
		return false;
}
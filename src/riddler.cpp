#include "riddler.hpp"

std::string qhi::Riddler::getDescription(int piq) const {
	return description + (isDefeated(piq)? advice:riddle);
}

bool qhi::Riddler::isDefeated(int) const {
	return defeated;
}
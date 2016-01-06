#include "riddler.hpp"

qhi::Riddler::Riddler(std::string desc, std::string adv, std::string rid) : Advisor(desc, adv) {
	riddle = rid;
}

qhi::Riddler::~Riddler() {
}

std::string qhi::Riddler::getDescription(int piq) const {
	return description + (isDefeated(piq)? advice:riddle);
}

bool qhi::Riddler::isDefeated(int) const {
	return defeated;
}
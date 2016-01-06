#include "riddler.hpp"

qhi::Riddler::Riddler(std::string desc, std::string adv, std::string rid) : Advisor(desc, adv) {
	riddle = rid;
	defeated = false;
}

qhi::Riddler::~Riddler() {
}

std::string qhi::Riddler::getDescription(int piq) const {
	return description + "\n" + (isDefeated(piq)? advice:riddle);
}

bool qhi::Riddler::isDefeated(int) const {
	return defeated;
}
#include "cluescroll.hpp"

qhi::Cluescroll::Cluescroll(std::string itemName, std::string itemClue) : Item(itemName) {
	clue = itemClue;
}

qhi::Cluescroll::~Cluescroll() {
}

std::string qhi::Cluescroll::getClue() const {
	return clue;
}

int qhi::Cluescroll::getType() const {
	return 1;
}
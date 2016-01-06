#include "mathematician.hpp"

qhi::Mathematician::Mathematician(std::string desc, std::string comp, std::string mock, Item *rew) : Item(desc) {
	compliment = comp;
	mockery = mock;
	reward = rew;
}

qhi::Mathematician::~Mathematician() {
}

std::string qhi::Mathematician::getDescription(int piq) const{
	return description + (isDefeated(piq)? compliment:mockery);
}

bool qhi::Mathematician::isDefeated(int piq) const {
	if(piq>iq)
		return true;
	return false;
}
#include "mathematician.hpp"

qhi::Mathematician::Mathematician(std::string desc, int npcIQ, std::string comp, std::string mock, Item *rew) : Actor(desc) {
	compliment = comp;
	mockery = mock;
	reward = rew;
	iq = npcIQ;
	itemLeft = true;
}

qhi::Mathematician::~Mathematician() {
}

std::string qhi::Mathematician::getDescription(int piq) const{
	return description + std::to_string(iq) + "\n" + (isDefeated(piq)? compliment:mockery);
}

bool qhi::Mathematician::isDefeated(int piq) const {
	if(piq>iq)
		return true;
	return false;
}

bool qhi::Mathematician::hasItem() const {
	return itemLeft;
}

qhi::Item* qhi::Mathematician::surrenderItem() {
	if(hasItem() == false)
		throw std::out_of_range("Tried to get item from a mathematician who had already given away his item.");
	itemLeft = false;
	return reward;
}

int qhi::Mathematician::getType() const {
	return 2;
}
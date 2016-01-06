#include "advisor.hpp"

qhi::Advisor::Advisor(std::string desc, std::string adv) : Actor(desc) {
	advice = adv;
}

qhi::Advisor::~Advisor() {
}

std::string qhi::Advisor::getDescription(int) const{
	return description + advice;
}

bool qhi::Advisor::isDefeated(int) const {
	return true;
}
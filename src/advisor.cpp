#include "advisor.hpp"

std::string qhi::Advisor::getDescription(int) const{
	return description + advice;
}

bool qhi::Advisor::isDefeated(int) const {
	return true;
}
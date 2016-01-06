#include "mathematician.hpp"

std::string qhi::Mathematician::getDescription(int piq) const{
	return description + (isDefeated(piq)? compliment:mockery);
}

bool qhi::Mathematician::isDefeated(int piq) const {
	if(piq>iq)
		return true;
	return false;
}
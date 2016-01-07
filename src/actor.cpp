#include "actor.hpp"

qhi::Actor::Actor(std::string desc) {
	description = desc;
	rightAnswer = -1;
}

qhi::Actor::~Actor() {
}

std::vector<std::string> qhi::Actor::getConversationOptions(int) const {
	return conversationOptions;
}

void qhi::Actor::addConversationOption(std::string opt) {
	conversationOptions.push_back(opt);
}

bool qhi::Actor::answer(int ans) { //Kan inte vara const
	if(ans == rightAnswer)
		return true;
	return false;
}

void qhi::Actor::setAnswer(int ans) {
	rightAnswer = ans;
}
#pragma once
#include <string>
#include <vector>
#include <stdexcept>

namespace qhi {
	class Actor {
	protected:
		std::string description;
		std::vector<std::string> conversationOptions;
		int rightAnswer;
	public:
		Actor(std::string desc);
		virtual ~Actor();
		virtual std::string getDescription(int playerIQ) const = 0;
		virtual bool isDefeated(int playerIQ) const = 0;
		virtual std::vector<std::string> getConversationOptions(int) const;
		virtual void addConversationOption(std::string opt);
		virtual bool answer(int ans);
		virtual void setAnswer(int ans);
	};
}
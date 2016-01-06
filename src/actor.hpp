#pragma once
#include <string>

namespace qhi {
	class Actor {
	protected:
		std::string description;
	public:
		virtual std::string getDescription(int playerIQ) const = 0;
		virtual bool isDefeated(int playerIQ) const = 0;
	};
}
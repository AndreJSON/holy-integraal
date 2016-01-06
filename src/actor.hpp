#pragma once
#include <string>

namespace qhi {
	class Actor {
	private:
		std::string description;
	public:
		virtual std::string getDescription() const;
	};
}
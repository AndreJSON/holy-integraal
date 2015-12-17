#pragma once
#include <string>

namespace qhi {
	class Area {
	private:
		std::string description;
	public:
		virtual std::string getDescription() const;
		virtual int getAreaType() const = 0;
	};
}
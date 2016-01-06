#pragma once
#include <string>

namespace qhi {
	class Item {
	private:
		std::string name;
	public:
		Item(std::string);
		virtual ~Item();
		std::string getName() const;
	};
}
#pragma once
#include <string>

namespace qhi {
	class Item {
	private:
		std::string name;
	public:
		Item(std::string);
		virtual ~Item();
		virtual std::string getName() const;
		virtual int getType() const = 0;
	};
}
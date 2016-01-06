#pragma once
#include "item.hpp"

namespace qhi {
	class Cluescroll : public Item{
	private:
		std::string clue;
	public:
		Cluescroll(std::string itemName, std::string itemClue);
		virtual ~Cluescroll();
		std::string getClue() const;
	};
}
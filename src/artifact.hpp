#pragma once
#include "item.hpp"

namespace qhi {
	class Artifact : public Item {
	private:
		int bonusIQ;
	public:
		Artifact(std::string itemName, int itemIQ);
		virtual ~Artifact();
		int getIQ() const;
	};
}
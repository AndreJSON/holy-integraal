#pragma once
#include "advisor.hpp"

namespace qhi {
	class Riddler : public Advisor {
	private:
		bool defeated;
		std::string riddle;
	public:
		virtual std::string getDescription(int piq) const override;
		virtual bool isDefeated(int piq) const override;
	};
}
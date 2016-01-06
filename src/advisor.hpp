#pragma once
#include "actor.hpp"

namespace qhi {
	class Advisor : public Actor {
	protected:
		std::string advice;
	public:
		virtual std::string getDescription(int piq) const override;
		virtual bool isDefeated(int piq) const override;
	};
}
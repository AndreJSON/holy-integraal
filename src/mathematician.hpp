#pragma once
#include "actor.hpp"

namespace qhi {
	class Mathematician : public Actor {
	private:
		int iq;
		std::string compliment, mockery;
	public:
		virtual std::string getDescription(int piq) const override;
		virtual bool isDefeated(int piq) const override;
	};
}
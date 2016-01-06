#pragma once
#include "actor.hpp"
#include "artifact.hpp"
#include "cluescroll.hpp"

namespace qhi {
	class Mathematician : public Actor {
	private:
		int iq;
		std::string compliment, mockery;
		Item *reward;
	public:
		Mathematician(std::string desc, std::string comp, std::string mock, Item *rew);
		virtual ~Mathematician();
		virtual std::string getDescription(int piq) const override;
		virtual bool isDefeated(int piq) const override;
	};
}
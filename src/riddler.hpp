#pragma once
#include "advisor.hpp"

namespace qhi {
	class Riddler : public Advisor {
	private:
		bool defeated;
		std::string riddle;
	public:
		Riddler(std::string desc, std::string adv, std::string rid);
		virtual ~Riddler();
		virtual std::string getDescription(int piq) const override;
		virtual bool isDefeated(int piq) const override;
	};
}
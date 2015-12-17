#pragma once
#include "area.hpp"

namespace qhi {
	class Connection : public Area {
	private:
		//Actor guard;
	public:
		virtual int getAreaType() const override;
	};
}
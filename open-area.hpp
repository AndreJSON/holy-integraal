#pragma once
#include "area.hpp"

namespace qhi {
	class OpenArea : public Area {
	private:
	public:
		virtual int getAreaType() const override;
	};
}
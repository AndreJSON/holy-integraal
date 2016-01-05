#pragma once
#include "area.hpp"

namespace qhi {
	class OpenArea : public Area {
	private:
	public:
		OpenArea(std::string desc);
		virtual ~OpenArea();
		virtual int getAreaType() const override;
		virtual bool permittedDirection(int direction) const override;
	};
}
#pragma once
#include "area.hpp"

/*
* Connection is a special kind of area that only has two entry/exit points. One of them is blocked by a Guardian until it has been defeated.
*/
namespace qhi {
	class Connection : public Area {
	public:
		Connection(std::string desc);
		virtual ~Connection();
		virtual std::string getDescription(int playerIQ) const override;
		virtual int getAreaType() const override;
		virtual std::vector<std::string> getMovementDirections() const override;
		virtual bool permittedDirection(int direction) const override;
	};
}
#pragma once
#include "area.hpp"

/*
* Connection is a special kind of area that only has two entry/exit points. One of them is blocked by a Guardian until it has been defeated.
*/
namespace qhi {
	class Connection : public Area {
	private:
		//Actor guardian;
		bool guardianDefeated;
	public:
		Connection(std::string desc);
		virtual ~Connection();
		virtual std::string getDescription() const override;
		virtual int getAreaType() const override;
		virtual bool permittedDirection(int direction) override;
	};
}
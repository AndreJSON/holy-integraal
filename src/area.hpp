#pragma once
#include <string>
#include <map>

namespace qhi {
	class Area {
	private:
		std::string description;
		std::map<int,Area*> neighbours; //Points to neighbour of the given direction.
	public:
		Area(std::string desc);
		virtual ~Area();
		virtual std::string getDescription() const;
		virtual int getAreaType() const = 0;
		bool existsNeighbour(int direction) const;
		Area* getNeighbour(int direction) const; //returns a reference to the area in given direction.
		void addNeighbour(Area* ap, int direction);
		virtual bool permittedDirection(int direction) const = 0;
	};
}
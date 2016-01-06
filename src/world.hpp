#pragma once
#include "area.hpp"
#include "open-area.hpp"
#include "connection.hpp"
#include <vector>
#include <stdexcept>

namespace qhi {
	class World {
	private:
		std::vector<Area*> areas;
		Area *a;
		Area* getStartingArea() const;
	public:
		World();
		~World();
		void addArea(int type, std::string desc); //Type 1=OpenArea, 2=Connection.
		//Attaches the area at index1 facing direction1 with the area at index2 facing direction2.
		void attachAreas(int index1, int index2, int direction1, int direction2);
		void arrangeWorld(); //Should be called when all initializations to the world have been done.
		Area* getCurrentArea() const;
		void setCurrentArea(Area *p);
		bool finalAreaReached() const;
	};
}
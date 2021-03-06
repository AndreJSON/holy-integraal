#pragma once
#include "actor.hpp"
#include "advisor.hpp"
#include "riddler.hpp"
#include "mathematician.hpp"
#include "area.hpp"
#include "open-area.hpp"
#include "connection.hpp"
#include <vector>
#include <stdexcept>

namespace qhi {
	class World {
	private:
		std::vector<Area*> areas;
		std::vector<Actor*> actors;
		std::vector<Item*> items;
		std::vector<Item*> inventory; //Never needs to be free'd because it does not own any unique pointers to objects.
		Area *a;
		Area* getStartingArea() const;
		int iq;
	public:
		World();
		~World();
		void addArea(int type, std::string desc); //Type 1=OpenArea, 2=Connection.
		void attachAreas(int index1, int index2, int direction1, int direction2);//Attaches the area at index1 facing direction1 with the area at index2 facing direction2.
		void addAdvisor(int index, std::string description, std::string advice);
		void addRiddler(int index, std::string description, std::string advice, std::string riddle);
		void addConversation(int index, int ans, std::vector<std::string>);
		void addMathematician(int index, int iq, std::string desc, std::string mock, std::string comp, std::string clue);
		void addMathematician(int index, int iq, std::string desc, std::string mock, std::string comp, int itemIQ);
		void arrangeWorld(); //Should be called when all initializations to the world have been done.
		Area* getCurrentArea() const;
		void setCurrentArea(Area *p);
		int getIQ() const;
		void increaseIQ(int);
		void addInventory(Item *i);
		std::string getInventory() const;
		bool finalAreaReached() const;
	};
}
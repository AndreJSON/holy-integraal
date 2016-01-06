#pragma once
#include "actor.hpp"
#include <string>
#include <map>

namespace qhi {
	class Area {
	private:
		std::string description;
		std::map<int,Area*> neighbours; //Points to neighbour of the given direction.
		bool hasActor;
		Actor *npc;
	public:
		Area(std::string desc);
		virtual ~Area();
		virtual std::string getDescription(int playerIQ) const;
		virtual int getAreaType() const = 0;
		bool existsNeighbour(int direction) const;
		Area* getNeighbour(int direction) const;
		void addNeighbour(Area* ap, int direction);
		bool existsActor() const;
		const Actor& getActor() const;
		void setActor(Actor *ap);
		virtual bool permittedDirection(int direction) const = 0;
	};
}
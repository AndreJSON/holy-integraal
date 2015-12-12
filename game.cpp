#include "game.hpp"
using namespace qhi;

int main(void) {
	bool playing = true;
	World w;
	fillWorld(w);

	while(playing) {
		playing = false;
	}

	return 0;
}

void qhi::introduce() {
}

std::string qhi::getInput() {
	return "";
}

void qhi::fillWorld(World &w) {
}
#include "game.hpp"
using namespace qhi;
using std::cout;
using std::endl;

int main(void) {
	bool playing = true;
	World w;
	fillWorld(w);

	introduce();

	while(playing) {
		playing = false;
	}

	return 0;
}

std::string qhi::getInput() {
	return "";
}

void qhi::introduce() {
	cout << endl << endl << endl;
	cout << "|------------------------------------|" << endl;
	cout << "|--The Quest for the Holy Integraal--|" << endl;
	cout << "|------------------------------------|" << endl;
	cout << endl << endl;
	cout << "A long time ago in a galaly far, far away..." << endl;
	cout << "On a planet, where power is measured solely through IQ and a" << endl;
	cout << "mathematical publication is the most prestigeuos accomplishment." << endl;
	cout << "A decade long civil war has been fought between the two noble" << endl;
	cout << "houses Leibniz and Newton. The reason for the horrible war is" << endl;
	cout << "a dispute regarding who the rightful publisher of calculus is." << endl;
	cout << "The only thing that could stop this calamity and unite the" << endl;
	cout << "people is if a new, considerably smarter man would come along." << endl;
	cout << "But the only way to get an IQ of that magnitude would be to drink" << endl;
	cout << "from the artifact that has since long fallen in to oblivion, the" << endl;
	cout << "very same artifact that raised Gauss to his divine status." << endl;
	cout << "The Holy Integraal." << endl << endl << endl << endl;
}

void qhi::fillWorld(World &w) {
}
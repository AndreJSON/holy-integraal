#include "game.hpp"
using namespace qhi;
using std::cout; using std::endl; using std::cin;
#define NORTH 1
#define EAST 2
#define SOUTH 3
#define WEST 4
#define ENTRANCE 1
#define EXIT 2
#define TYPE_OPENAREA 1
#define TYPE_CONNECTION 2

int main(void) {
	World w;
	fillWorld(w);
	introduce();

	while(true) {
		cout << endl << w.getCurrentArea()->getDescription();
		if(w.finalAreaReached()) {
			endGame();
			return 0;
		}
		handleOptions(w);
	}

	return 1;
}

void qhi::handleOptions(World &w) {
	int paths = w.getCurrentArea()->getAreaType() == 1? 4 : 2;
	cout << endl << endl << "What do you do?" << endl;
	if(w.getCurrentArea()->getAreaType() == 1) { //open area
		cout << "[1] Go north" << endl;
		cout << "[2] Go east" << endl;
		cout << "[3] Go south" << endl;
		cout << "[4] Go west" << endl;
	} else { //connection
		cout << "[1] Go back" << endl;
		cout << "[2] Continue on" << endl;
	}
	int input = getInput(paths);
	if (input <= paths) {
		if(w.getCurrentArea()->existsNeighbour(input)) {
			w.setCurrentArea(w.getCurrentArea()->getNeighbour(input));
		} else {
			cout << endl << "It looks rather boring in that direction, so you decide to not go there." << endl;
		}
	} else {
		input -= paths;
	}
}

int qhi::getInput(int numOfOptions) {
	std::string input;
	std::getline(cin,input);
	int num;
	try {
		num = std::stoi(input,nullptr);
	} catch(...) {
		num = -1;
	}
	if(num > 0 && num <= numOfOptions) {
		return num;
	} else {
		cout << "That is not a valid action. Please try again." << endl;
		return getInput(numOfOptions);
	}
}

void qhi::introduce() {
	cout << endl << endl << endl;
	cout << "|------------------------------------|" << endl;
	cout << "|--The Quest for the Holy Integraal--|" << endl;
	cout << "|------------------------------------|" << endl;
	cout << endl << endl;
	cout << "A long time ago in a galaxy far, far away..." << endl;
	cout << "On a planet, where power is measured solely through IQ and a" << endl;
	cout << "mathematical publication is the most prestigeuos accomplishment." << endl;
	cout << "A decade long civil war has been fought between the two noble" << endl;
	cout << "houses Leibniz and Newton. The reason for the horrible war is" << endl;
	cout << "a dispute regarding who the rightful publisher of calculus is." << endl;
	cout << "The only thing that can stop this calamity and unite the" << endl;
	cout << "people, is if a new, considerably smarter man would come along." << endl;
	cout << "But the only way to get an IQ of that magnitude would be to drink" << endl;
	cout << "from the artifact that has since long fallen into oblivion, the" << endl;
	cout << "very same artifact that raised Gauss to his divine status." << endl;
	cout << "The Holy Integraal." << endl << endl << endl << endl;
}

void qhi::endGame() {
	cout << endl;
	cout << "- \"Don't be alarmed, I am merely enlightening you\" a voice says." << endl;
	cout << "Slowly, but then all at once you feel like you understand everything around you." << endl;
	cout << "- \"You are now ready to bring peace to this world\" the voice says." << endl;
	cout << endl << endl;
	cout << "|------------------------------------|" << endl;
	cout << "|-------------- THE END -------------|" << endl;
	cout << "|------------------------------------|" << endl << endl << endl << endl;
}

void qhi::fillWorld(World &w) {
	w.addArea(TYPE_OPENAREA, "You are in the middle of nowhere."); 																//0
	w.addArea(TYPE_OPENAREA, "You are at a road fork.");																		//1
	w.addArea(TYPE_CONNECTION, "You are on a long tortuous path.");																//2
	w.addArea(TYPE_OPENAREA, "You see a tavern and decide to enter it. Inside ***");											//3
	w.addArea(TYPE_OPENAREA, "You approach a beautiful statue of gold.");														//4
	w.addArea(TYPE_OPENAREA, "You enter some sort of Bazaar. Merchants are all around you screaming to get their goods sold.");	//5
	w.addArea(TYPE_OPENAREA, "You are at the edge of a huge dark forest.");														//6
	w.addArea(TYPE_OPENAREA, "You wander through the forest. After a while you decide to stop. It is dark all around you.");	//7
	w.addArea(TYPE_OPENAREA, "You wander through the forest. After a while you decide to stop. It is dark all around you.");	//8
	w.addArea(TYPE_OPENAREA, "You wander through the forest. After a while you decide to stop. It is dark all around you.");	//9
	w.addArea(TYPE_OPENAREA, "As you enter, you see an immensely strong lightsource hover in the middle of the room.");			//10											//99

	w.attachAreas(0,1,SOUTH,NORTH);
	w.attachAreas(0,4,WEST,EAST);
	w.attachAreas(1,2,WEST,ENTRANCE);
	w.attachAreas(1,3,EAST,WEST);
	w.attachAreas(2,5,EXIT,WEST);
	w.attachAreas(5,6,EAST,WEST);
	w.attachAreas(6,7,SOUTH,NORTH);
	w.attachAreas(7,8,WEST,WEST);
	w.attachAreas(7,8,EAST,EAST);
	w.attachAreas(7,8,SOUTH,NORTH);
	w.attachAreas(8,9,SOUTH,EAST);
	w.attachAreas(9,9,WEST,SOUTH);

	w.attachAreas(9,10,NORTH,EAST);
	//Finally call the arrangeWorld method to make the world ready for usage.
	w.arrangeWorld();
}
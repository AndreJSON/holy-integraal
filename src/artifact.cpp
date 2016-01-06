#include "artifact.hpp"

qhi::Artifact::Artifact(std::string itemName, int itemIQ) : Item(itemName) {
	bonusIQ = itemIQ;
}

qhi::Artifact::~Artifact() {
}

int qhi::Artifact::getIQ() const {
	return bonusIQ;
}
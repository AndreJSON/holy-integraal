#include "item.hpp"

qhi::Item::Item(std::string itemName) {
	name = itemName;
}

qhi::Item::~Item() {
}

std::string qhi::Item::getName() const {
	return name;
}
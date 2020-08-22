#include "PhysicalGame.h"

PhysicalGame::PhysicalGame(){}

PhysicalGame::PhysicalGame(const std::string &name, double price, double tax) : Game(name, price, tax) {}

PhysicalGame::PhysicalGame(const std::string &name, double price, double tax, double itemWeight,
                           const std::string &productDimensions) : Game(name, price, tax), itemWeight(itemWeight),
                                                                   productDimensions(productDimensions) {}

PhysicalGame::~PhysicalGame() {}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

void PhysicalGame::setProductDimensions(const std::string &productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
}

double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

const std::string &PhysicalGame::getProductDimensions() const {
    return productDimensions;
}

double PhysicalGame::calculatePriceWithTax() {
    return getPrice();
}

std::string PhysicalGame::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice with Tax: $" << getPrice();
    return output.str();
}

std::string PhysicalGame::ship_game() {
    return "this product will have a shipment.";
}
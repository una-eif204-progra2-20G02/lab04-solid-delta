#include "StreamingGame.h"

StreamingGame::StreamingGame() {}

StreamingGame::StreamingGame(const std::string &name, double price, double tax, float tax1) : Game(name, price, tax),
                                                                                              tax(tax1) {}
StreamingGame::~StreamingGame(){}

double StreamingGame::calculatePriceWithTax(){

}

void StreamingGame::replace() { "This product have a replacement"; }

std::string StreamingGame::toString() const{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << "\nPrice with Tax: $" << getPrice();
    return output.str();
}
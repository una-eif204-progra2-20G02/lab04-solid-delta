#include "StreamingGame.h"

double StreamingGame::discount() {return getPrice() * 0.12;}

StreamingGame::StreamingGame() {}

StreamingGame::StreamingGame(const std::string &name, double price, double tax, float tax1) : Game(name, price, tax),tax(tax1) {}

StreamingGame::~StreamingGame(){}

void StreamingGame::replace() { "This product have a replacement"; }

void StreamingGame::purchase(IReceiptSender* receipt_sender) {
    receipt_sender->send_receipt();
}

std::string StreamingGame::saveData() {
    return toString();
}

std::string StreamingGame::toString() const{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << "\nPrice with Tax: $" << getPrice();
    return output.str();
}
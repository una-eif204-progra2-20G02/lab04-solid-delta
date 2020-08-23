//
// Created by Chris on 8/22/2020.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame(){
    file_path="";
    discount=15;
}

DigitalGame::DigitalGame(const std::string &name, double price, double tax):Game(name,price,tax){}

DigitalGame::DigitalGame(const std::string &name, double price, double tax, std::string file_path, float dis)
        :Game(name,price,tax),file_path(file_path),discount(dis){}

DigitalGame::~DigitalGame(){}
std::string DigitalGame::getFile_path(){
    return file_path;
}

void DigitalGame::setFile_path(std::string file_p){
    file_path=file_p;
}

int DigitalGame::getDicount(){
    return discount;
}

void DigitalGame::setDiscount(float dis){
    discount=dis;
}

double DigitalGame::calculatePriceWithTax(){
    return getPrice()-(getPrice() * discount);
}

void DigitalGame::replace() { "This product have a replacement"; }

std::string DigitalGame::toString() const{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << "\nPrice with Discount: $" << getPrice();
    return output.str();
}
//
// Created by Maikol Guzman on 8/17/20.
//

#include "Game.h"

Game::Game() {}

Game::Game(const std::string &name, double price, double tax) : name(name), price(price), tax(tax) {}

Game::~Game() {}

const std::string &Game::getName() const {
    return name;
}

void Game::setName(const std::string &name) {
    Game::name = name;
}

double Game::getPrice() const {
    return price;
}

void Game::setPrice(double price) {
    Game::price = price;
}

double Game::getTax() const {
    return tax;
}

void Game::setTax(double tax) {
    Game::tax = tax;
}

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void Game::save(const std::string &filename) {
    std::ofstream ofs (filename, std::ofstream::out);

    ofs << toString();

    ofs.close();
}

std::string Game::toString() const{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice();
    return output.str();
}
//
// Created by Chris on 8/22/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H

#include "Game.h"

class DigitalGame : public Game{
public:
    std::string file_path;
    int discount=15;
private:
    DigitalGame();
    DigitalGame(const std::string &name, double price, double tax);
    DigitalGame(const std::string &name, double price, double tax, std::string file_path, int discount);
    virtual ~DigitalGame();
    std::string getFile_path();
    void setFile_path(std::string);
    int getDicount();
    void setDiscount(int);
    double calculatePriceWithTax();
    std::string replace_game();
    std::string toString() const;
};


#endif //LAB04_SOLID_DIGITALGAME_H

//
// Created by Chris on 8/22/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H

#include "Game.h"
#include "IReplaceable.h"

class DigitalGame : public Game, IReplaceable{
    std::string file_path;
    float discount=0.15;

public:
    DigitalGame();

    DigitalGame(const std::string &name, double price, double tax);

    DigitalGame(const std::string &name, double price, double tax, std::string file_path, float discount);

    virtual ~DigitalGame();

    std::string getFile_path();

    void setFile_path(std::string);

    int getDicount();

    void setDiscount(float);

    double calculatePriceWithTax();

    void replace() override;

    std::string toString() const;
};

#endif //LAB04_SOLID_DIGITALGAME_H
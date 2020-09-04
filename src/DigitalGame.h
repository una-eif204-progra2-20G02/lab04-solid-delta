//
// Created by Chris on 8/22/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H

#include "Game.h"
#include "IReplaceable.h"
#include "IReceiptSender.h"
#include "ISaveGame.h"

class DigitalGame : public Game, public ISaveGame, public IReplaceable {
    std::string file_path;
    double discount=0.15;

public:
    DigitalGame();

    DigitalGame(const std::string &name, double price, double tax);

    DigitalGame(const std::string &name, double price, double tax, std::string file_path, float discount);

    virtual ~DigitalGame();

    std::string getFile_path();

    void setFile_path(std::string);

    double getDicount();

    void setDiscount(double);

    double calculatePriceWithTax() const;

    virtual void replace();

    std::string toString() const;

    void purchase(IReceiptSender*);

    std::string saveData() override;

};

#endif //LAB04_SOLID_DIGITALGAME_H
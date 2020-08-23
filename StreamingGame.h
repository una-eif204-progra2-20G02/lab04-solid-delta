#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H

#include "Game.h"
#include "IReplaceable.h"

class StreamingGame : public Game, IReplaceable {
    float tax=0.15;
public:
    StreamingGame();

    StreamingGame(const std::string &name, double price, double tax, float tax1);

    ~StreamingGame();

    double calculatePriceWithTax();

    void replace() override;

    std::string toString() const;
};

#endif //LAB04_SOLID_STREAMINGGAME_H
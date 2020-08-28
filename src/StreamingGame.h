#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H

#include "Game.h"
#include "IReplaceable.h"
#include "IReceiptSender.h"
#include "ISaveGame.h"

class StreamingGame : public Game, public ISaveGame, public IReplaceable {

    float tax=0.15;

    double discount() override;

public:
    StreamingGame();

    StreamingGame(const std::string &name, double price, double tax, float tax1);

    ~StreamingGame();

    void replace() override;

    void purchase(IReceiptSender*);

    std::string saveData() override;

    std::string toString() const;
};

#endif //LAB04_SOLID_STREAMINGGAME_H
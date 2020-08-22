#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H

#include "Game.h"

class PhysicalGame: public Game {
    double itemWeight;
    std::string productDimensions;

    double discount() override;

public:
    PhysicalGame();

    PhysicalGame(const std::string &name, double price, double tax);

    PhysicalGame(const std::string &name, double price, double tax, double itemWeight,
                 const std::string &productDimensions);

    virtual ~PhysicalGame();

    void setItemWeight(double itemWeight);

    void setProductDimensions(const std::string &productDimensions);

    double getItemWeight() const;

    const std::string &getProductDimensions() const;

    std::string toString() const override;

    std::string ship_game();
};

#endif //LAB04_SOLID_PHYSICALGAME_H
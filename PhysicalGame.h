#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H

#include "Game.h"
#include "IShippable"

class PhysicalGame: public Game: public IShippable {
    double itemWeight;
    std::string productDimensions;

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

    double calculatePriceWithTax() override;

    std::string toString() const override;

    std::string ship();
};

#endif //LAB04_SOLID_PHYSICALGAME_H
//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>

class Game {
public:
    Game();

    Game(const std::string &name, double price, double tax);

    Game(const std::string &name, double price, double itemWeight, const std::string &productDimensions);

    const std::string &getName() const;

    void setName(const std::string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    const std::string &getProductDimensions() const;

    void setProductDimensions(const std::string &productDimensions);

    double calculatePriceWithTax();

    void save(const std::string &filename);

    std::string toString();
private:
    std::string name;
    double price;
    double tax;
    double itemWeight;
    std::string productDimensions;
};


#endif //LAB04_SOLID_GAME_H

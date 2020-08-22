//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <iomanip>
#include <fstream>
#include <sstream>

class Game {
protected:
    std::string name;
    double price;
    double tax;

public:
    Game();

    Game(const std::string &name, double price, double tax);

    virtual ~Game();

    const std::string &getName() const;

    void setName(const std::string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    virtual double calculatePriceWithTax()=0;

    void save(const std::string &filename);

    virtual std::string toString() const;
};

#endif //LAB04_SOLID_GAME_H
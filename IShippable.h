//
// Created by Al404 on 22/8/2020.
//

#ifndef LAB04_SOLID_ISHIPPABLE_H
#define LAB04_SOLID_ISHIPPABLE_H

#include "sstream"

class IShippable {

public:
    virtual std::string ship()=0;
};

#endif //LAB04_SOLID_ISHIPPABLE_H
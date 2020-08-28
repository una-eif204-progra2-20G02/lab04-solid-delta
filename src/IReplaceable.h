#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H

class IReplaceable{
public:
    virtual void replace()=0;
    virtual ~IReplaceable();
};

#endif
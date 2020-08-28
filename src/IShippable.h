#ifndef LAB04_SOLID_ISHIPPABLE_H
#define LAB04_SOLID_ISHIPPABLE_H

class IShippable {
public:
    virtual void ship()=0;
    virtual ~IShippable();
};
#endif //LAB04_SOLID_ISHIPPABLE_H
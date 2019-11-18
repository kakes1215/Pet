#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Pet.h"

class Cat : public Pet
{
public:
    Cat();
    Cat(std::string name, bool neuterSpayed, bool insideCat, std::string markings);

    void isInsideCat(bool value);
    void setMarkings(std::string newMarking);

    bool getIsInsideCat() const;
    std::string getMarkings() const;

    void printDescription() override;

private:
    bool insideCat;
    std::string markings;
};
#endif
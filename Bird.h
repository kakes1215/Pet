#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include "Pet.h"

class Bird : public Pet
{
public:
    Bird();
    Bird(std::string name, bool talks, std::string color) {}

    void setColor(std::string newColor);
    std::string getColor() const;

    void printDescription() override;

private:
    std::string color;
};
#endif
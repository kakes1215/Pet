#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include "Pet.h"

class Bird : public Pet
{
public:
    Bird();
    Bird(std::string name, bool talks, std::string color);

    void setColor(std::string newColor);
    void setTalks(bool newValue);

    std::string getColor() const;
    bool getTalks() const;

    void printDescription() override;

private:
    bool talks;
    std::string color;
};
#endif
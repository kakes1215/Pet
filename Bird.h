/**
Bird.h
Interface for the Bird class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include "Pet.h"

class Bird : public Pet
{
public:
    //Constructors
    Bird();
    Bird(std::string name, bool talks, std::string color);

    //Setters
    void setColor(std::string newColor);
    void setTalks(bool newValue);

    //Getters
    std::string getColor() const;
    bool getTalks() const;

    //Print Method
    void printDescription() override;

private:
    //Private Variables
    bool talks;
    std::string color;
};
#endif
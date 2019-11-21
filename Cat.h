/**
Cat.h
Interface for the Cat class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Pet.h"

class Cat : public Pet
{
public:

    //Constructors
    Cat();
    Cat(std::string name, bool neuterSpayed, bool insideCat, std::string markings);

    //Setters
    void isInsideCat(bool value);
    void setMarkings(std::string newMarking);

    //Getters
    bool getIsInsideCat() const;
    std::string getMarkings() const;

    //Print Description
    void printDescription() override;

private:
    //Private Variables
    bool insideCat;
    std::string markings;
};
#endif
/**
Dog.h
Interface for the Dog class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Pet.h"

class Dog : public Pet
{
public:
  //Constructors
  Dog();
  Dog(std::string name, bool isNeuteredSpayed, std::string breed,
      bool isTrained);

  //Setters
  void setBreed(std::string newBreed);
  void setIsTrained(bool newValue);

  //Getters
  std::string getBreed() const;
  bool getIsTrained() const;

  //Print Description
  void printDescription() override;

private:
  //private variables
  std::string breed;
  bool isTrained;
};
#endif
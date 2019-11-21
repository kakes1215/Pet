/**
Pet.h
Pet Interface

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#ifndef PET_H
#define PET_H
#include <iostream>

class Pet
{
public:
  //Constructors
  Pet();
  Pet(std::string name);
  Pet(std::string name, bool neuterSpayed);

  //Setters
  void setName(std::string newName);
  void setNeuteredSpayed(bool newValue);

  //Getters
  std::string getName() const;
  bool getNeuteredSpayed() const;

  //Print Description
  virtual void printDescription();
  
  std::string convertBoolToString(bool value);

private:
  //Private variables
  std::string name;
  bool neuterSpayed;
};

#endif
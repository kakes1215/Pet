#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Pet.h"

class Dog : public Pet
{
public:
  Dog();
  Dog(std::string name, bool isNeuteredSpayed, std::string breed,
      bool isTrained);

  void setBreed(std::string newBreed);
  void setIsTrained(bool newValue);
  void setNeuteredSpayed(bool newValue);

  std::string getBreed() const;
  bool getIsTrained() const;
  bool getNeuteredSpayed() const;

  void printDescription() override;

private:
  std::string breed;
  bool isTrained;
  bool neuterSpayed;
};
#endif
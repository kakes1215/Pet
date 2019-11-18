#include <iostream>
#include "Pet.h"

class Dog : public Pet 
{
  public:
    Dog(): Pet(), breed("No Breed Information Available", isTrained(false))

    Dog(std::string name, )

  private:
    std::string breed;
    bool isTrained;


}
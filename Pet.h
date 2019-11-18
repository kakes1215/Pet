#ifndef PET_H
#define PET_H
#include <iostream>

class Pet
{
public:
  Pet();
  Pet(std::string name);

  void setName(std::string newName);
  std::string getName() const;

  virtual void printDescription();

private:
  std::string name;
};

#endif
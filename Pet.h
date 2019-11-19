#ifndef PET_H
#define PET_H
#include <iostream>

class Pet
{
public:
  Pet();
  Pet(std::string name);
  Pet(std::string name, bool neuterSpayed);

  void setName(std::string newName);
  void setNeuteredSpayed(bool newValue);

  std::string getName() const;
  bool getNeuteredSpayed() const;

  virtual void printDescription();
  
  std::string convertBoolToString(bool value);

private:
  std::string name;
  bool neuterSpayed;
};

#endif
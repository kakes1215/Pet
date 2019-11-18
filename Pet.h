#include <iostream>
#ifndef PET_H
#define PET_H

class Pet
{
public:
  Pet();
  Pet(std::string name, bool isNeuteredSpayed);
  Pet(std::string name, bool isNeuteredSpayed, bool talks);

  virtual void printDescription();

  void setName(std::string newName);
  void setNeuteredSpayed(bool newValue);
  void setTalks(bool newValue);

  std::string getName() const;
  bool getNeuteredSpayed() const;
  bool getTalks() const;

private:
  std::string name;
  bool neuterSpayed;
  bool talks;
};

#endif
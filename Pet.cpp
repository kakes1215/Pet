#include <iostream>
#include "Pet.h"

using namespace std;
  
Pet::Pet()
{
  name = "No Name";
  neuterSpayed = false;
  talks = false;
}

void Pet::printDescription()
{
  cout << "Pet named " << name << endl;
  cout << "Neuter/Spayed: " << neuterSpayed << endl;
}

void Pet::setName(std::string newName) 
{
  name = newName;
}

void Pet::setNeuteredSpayed (bool newValue)
{
  neuterSpayed = newValue;
}

void Pet::setTalks(bool newValue)
{
  talks = newValue;
}

std::string Pet::getName() const
{
  return name;
}

bool Pet::getNeuteredSpayed() const
{
  return neuterSpayed;
}

bool Pet::getTalks() const
{
  return talks;
}
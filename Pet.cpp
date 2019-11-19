#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet() : name("No Name") {}

Pet::Pet(string name) : name(name) {}

Pet::Pet(std::string name, bool neuterSpayed) : name(name), neuterSpayed(neuterSpayed) {}

void Pet::setName(std::string newName) { name = newName; }

void Pet::setNeuteredSpayed(bool newValue) { neuterSpayed = newValue; }

std::string Pet::getName() const { return name; }

bool Pet::getNeuteredSpayed() const { return neuterSpayed; }

std::string Pet::convertBoolToString(bool value)
{
  if(value) 
  {
    return "Yes";
  } else {
    return "No";
  }
}


void Pet::printDescription()
{
  cout << endl << "**************************************" << endl;
  cout << "Pet named " << name << endl;
  cout << "Neutered or Spayed: " << neuterSpayed << endl;
  cout << "**************************************" << endl;

}
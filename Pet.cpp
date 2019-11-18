#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet() : name("No Name") {}

Pet::Pet(string name) : name(name) {}

void Pet::setName(std::string newName) { name = newName; }

void Pet::setNeuteredSpayed(bool newValue) { neuterSpayed = newValue; }

std::string Pet::getName() const { return name; }

bool Pet::getNeuteredSpayed() const { return neuterSpayed; }

void Pet::printDescription()
{
  cout << "Pet named " << name << endl;
  cout << "Neutered or Spayed: " << neuterSpayed << endl;
}
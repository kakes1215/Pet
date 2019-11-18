#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet() : name("No Name"), neuterSpayed(false), talks(false) {}

Pet::Pet(string name, bool isNeuteredSpayed)
    : name(name), neuterSpayed(isNeuteredSpayed) {}

Pet::Pet(std::string name, bool isNeuteredSpayed, bool talks)
    : name(name), neuterSpayed(isNeuteredSpayed), talks(talks) {}

void Pet::setName(std::string newName) { name = newName; }

void Pet::setNeuteredSpayed(bool newValue) { neuterSpayed = newValue; }

void Pet::setTalks(bool newValue) { talks = newValue; }

std::string Pet::getName() const { return name; }

bool Pet::getNeuteredSpayed() const { return neuterSpayed; }

bool Pet::getTalks() const { return talks; }

void Pet::printDescription()
{
  cout << "Pet named " << name << endl;
  cout << "Neuter/Spayed: " << neuterSpayed << endl;
}
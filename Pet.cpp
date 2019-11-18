#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet() : name("No Name") {}

Pet::Pet(string name) : name(name) {}

void Pet::setName(std::string newName) { name = newName; }

std::string Pet::getName() const { return name; }

void Pet::printDescription()
{
  cout << "Pet named " << name << endl;
}
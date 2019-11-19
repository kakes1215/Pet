#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog() : Pet(), breed("No Breed Info Available"), isTrained(false) {}

Dog::Dog(std::string name, bool isNeuteredSpayed, std::string breed, bool isTrained)
    : Pet(name, isNeuteredSpayed), breed(breed), isTrained(isTrained) {}

void Dog::setBreed(string newBreed) { breed = newBreed; }

void Dog::setIsTrained(bool newValue) { isTrained = newValue; }

string Dog::getBreed() const { return breed; }

bool Dog::getIsTrained() const { return isTrained; }

void Dog::printDescription()
{
    cout << endl << "**************************************" << endl;
    cout << "Dog named " << getName() << endl;
    cout << "Neuter/Spayed: " << convertBoolToString(getNeuteredSpayed())<< endl;
    cout << "Breed: " << breed << endl;
    cout << "Dog is Trained: " << convertBoolToString(isTrained) << endl;
    cout << "**************************************" << endl;

}

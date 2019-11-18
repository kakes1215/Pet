#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog() : Pet(), breed("No Breed Info Available"), isTrained(false), neuterSpayed(false) {}

Dog::Dog(std::string name, bool isNeuteredSpayed, std::string breed, bool isTrained)
    : Pet(name), breed(breed), isTrained(isTrained), neuterSpayed(isNeuteredSpayed) {}

void Dog::setBreed(string newBreed) { breed = newBreed; }

void Dog::setIsTrained(bool newValue) { isTrained = newValue; }

void Dog::setNeuteredSpayed(bool newValue) { neuterSpayed = newValue; }

string Dog::getBreed() const { return breed; }

bool Dog::getIsTrained() const { return isTrained; }

bool Dog::getNeuteredSpayed() const { return neuterSpayed; }

void Dog::printDescription()
{
    cout << "Dog named " << getName() << endl;
    cout << "Neuter/Spayed: " << neuterSpayed << endl;
    cout << "Breed: " << breed << endl;
    cout << "Dog is Trained: " << isTrained << endl;
}

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() : Pet(), insideCat(false), markings("No Marking Information") {}

Cat::Cat(string name, bool neuterSpayed, bool insideCat, string markings)
    : Pet(name, neuterSpayed), insideCat(insideCat), markings(markings) {}

void Cat::isInsideCat(bool value) { insideCat = value; }

void Cat::setMarkings(std::string newMarking) { markings = newMarking; }

bool Cat::getIsInsideCat() const { return insideCat; }

std::string Cat::getMarkings() const { return markings; }

void Cat::printDescription()
{
    cout << endl << "**************************************" << endl;
    cout << "Cat named " << getName() << endl;
    cout << "Neuter/Spayed: " << convertBoolToString(getNeuteredSpayed()) << endl;
    cout << "Is Inside Cat: " << convertBoolToString(insideCat) << endl;
    cout << "Markings: " << markings << endl;
    cout << "**************************************" << endl;

}
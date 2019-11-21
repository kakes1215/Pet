/**
Cat.cpp
Implements code for the Cat class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#include <iostream>
#include "Cat.h"

using namespace std;

/**
	General Constructor
*/
Cat::Cat() : Pet(), insideCat(false), markings("No Marking Information") {}

/**
	Parameterized Constructor
*/
Cat::Cat(string name, bool neuterSpayed, bool insideCat, string markings)
    : Pet(name, neuterSpayed), insideCat(insideCat), markings(markings) {}

/**
	Returns whether the cat is an inside cat or not
  @param new bool value
*/
void Cat::isInsideCat(bool value) { insideCat = value; }

/**
	Set the markings for the Cat
  @param markings
*/
void Cat::setMarkings(std::string newMarking) { markings = newMarking; }

/**
	Get is inside cat
  @return bool value whether the cat is inside or not
*/
bool Cat::getIsInsideCat() const { return insideCat; }

/**
	Get the Cat's markings
  @return the markings of the cat
*/
std::string Cat::getMarkings() const { return markings; }

/**
	Print Cat Description
*/
void Cat::printDescription()
{
    cout << endl << "**************************************" << endl;
    cout << "Cat named " << getName() << endl;
    cout << "Neuter/Spayed: " << convertBoolToString(getNeuteredSpayed()) << endl;
    cout << "Is Inside Cat: " << convertBoolToString(insideCat) << endl;
    cout << "Markings: " << markings << endl;
    cout << "**************************************" << endl;

}
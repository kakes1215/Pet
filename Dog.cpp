/**
Dog.cpp
Implementation of the Dog class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#include <iostream>
#include "Dog.h"

using namespace std;

/**
	Dog general constructor
*/
Dog::Dog() : Pet(), breed("No Breed Info Available"), isTrained(false) {}

/**
	Dog paramerterized constructor
*/
Dog::Dog(std::string name, bool isNeuteredSpayed, std::string breed, bool isTrained)
    : Pet(name, isNeuteredSpayed), breed(breed), isTrained(isTrained) {}

/**
	Set the Dog's Breed
  @param Incoming Breed
*/
void Dog::setBreed(string newBreed) { breed = newBreed; }

/**
	Set whether the dog is Trained
  @param newValue
*/
void Dog::setIsTrained(bool newValue) { isTrained = newValue; }

/**
  Get the dog's breed
  @return dog's breed
*/
string Dog::getBreed() const { return breed; }

/**
	Get Dog is Trained
  @return bool whether the dog is trained or not
*/
bool Dog::getIsTrained() const { return isTrained; }

/**
	Print the Dog's Description
*/
void Dog::printDescription()
{
    cout << endl << "**************************************" << endl;
    cout << "Dog named " << getName() << endl;
    cout << "Neuter/Spayed: " << convertBoolToString(getNeuteredSpayed())<< endl;
    cout << "Breed: " << breed << endl;
    cout << "Dog is Trained: " << convertBoolToString(isTrained) << endl;
    cout << "**************************************" << endl;

}

/**
Pet.cpp
Implements Pet class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#include <iostream>
#include "Pet.h"

using namespace std;

/**
	Generalized Pet Constructor
*/
Pet::Pet() : name("No Name") {}

/**
	Parameterized Pet Constructor
*/
Pet::Pet(string name) : name(name) {}

/**
  Parameterized Pet Constructor
*/
Pet::Pet(std::string name, bool neuterSpayed) : name(name), neuterSpayed(neuterSpayed) {}

/**
	Set Pet's Name
  @param string for the new name
*/
void Pet::setName(string newName) { name = newName; }

/**
  Set whether the pet is spayed or neutered
	@param boolean new value
*/
void Pet::setNeuteredSpayed(bool newValue) { neuterSpayed = newValue; }

/**
	Gets the pets name
  @return string value of the pets name
*/
string Pet::getName() const { return name; }

/**
	Get whether the pet is neutered or spayed
  @return boolean based on whether the pet is spayed/neutered
*/
bool Pet::getNeuteredSpayed() const { return neuterSpayed; }

/**
	Converts bool value to a readable string
	@param bool value
  @return String of Yes or No
*/
string Pet::convertBoolToString(bool value)
{
  if(value) 
  {
    return "Yes";
  } else {
    return "No";
  }
}

/**
	Print the description for the General Pet
*/
void Pet::printDescription()
{
  cout << endl << "**************************************" << endl;
  cout << "Pet named " << name << endl;
  cout << "Neutered or Spayed: " << neuterSpayed << endl;
  cout << "**************************************" << endl;

}
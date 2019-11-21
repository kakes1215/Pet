/**
Bird.cpp
Implements code for the Bird class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/21/2019
**/
#include <iostream>
#include "Bird.h"

using namespace std;


/**
	General Bird Constructor
*/
Bird::Bird() : Pet(), talks(false), color("No Color Information") {}

/**
	Parameterized Bird Constructor
*/
Bird::Bird(std::string name, bool talks, std::string color)
  : Pet(name), talks(talks), color(color) {}


/**
	Setter for Bird Color
	@param VectorDouble incoming color
*/
void Bird::setColor(string newColor) { color = newColor; }

/**
  Setter for Bird Talks
	@param VectorDouble incoming bool value
*/
void Bird::setTalks(bool newValue) { talks = newValue; }

/**
	Get the color
  @return the birds color
*/
string Bird::getColor() const { return color; }

/**
	Get the talks boolean
  @return boolean based on whether the bird talks or not
*/
bool Bird::getTalks() const { return talks; }

/**
	Prints the description
*/
void Bird::printDescription()
{
    cout << endl << "**************************************" << endl;
    cout << "Bird named " << getName() << endl;
    cout << "Talks: " << convertBoolToString(talks) << endl;
    cout << "Color: " << color << endl;
    cout << "**************************************" << endl;

}

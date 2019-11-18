#include <iostream>
#include "Bird.h"

using namespace std;

Bird::Bird() : Pet(), color("No Color Information") {}

Bird::Bird(std::string name, bool talks, std::string color)
    : Pet(name, talks), color(color) {}

void Bird::setColor(string newColor) { color = newColor; }

string Bird::getColor() const { return color; }

void Bird::printDescription()
{
    cout << "Bird named " << getName() << endl;
    cout << "Talks: " << getTalks << endl;
    cout << "Color: " << color << endl;
}

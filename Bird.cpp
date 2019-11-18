#include <iostream>
#include "Bird.h"

using namespace std;

Bird::Bird() : Pet(), talks(false), color("No Color Information") {}

Bird::Bird(std::string name, bool talks, std::string color)
    : Pet(name), talks(talks), color(color) {}

void Bird::setColor(string newColor) { color = newColor; }

void Bird::setTalks(bool newValue) { talks = newValue; }

string Bird::getColor() const { return color; }

bool Bird::getTalks() const { return talks; }

void Bird::printDescription()
{
    cout << "Bird named " << getName() << endl;
    cout << "Talks: " << talks << endl;
    cout << "Color: " << color << endl;
}

#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Pet.h"

using namespace std;

int main()
{
  //Setup Dog Objects
  Dog dogs[3];
  Dog d1 = Dog();
  dogs[0] = d1;
  Dog d2 = Dog();
  d2.setBreed("German Shepherd");
  d2.setIsTrained(true);
  d2.setName("Buddy");
  d2.setNeuteredSpayed(true);
  dogs[1] = d2;
  Dog d3 = Dog("Bella", false, "Corgi", true);
  dogs[2] = d3;

  for (int i = 0; i < 3; i++)
  {
    dogs[i].printDescription();
  }

  //Setup Cat Objects
  Cat cats[3];
  Cat c1 = Cat();
  cats[0] = c1;
  Cat c2 = Cat();
  c2.setMarkings("Tabby");
  c2.setName("Sassy");
  c2.setNeuteredSpayed(true);
  c2.isInsideCat(true);
  cats[1] = c2;
  Cat c3 = Cat("Sammy", false, false, "Calico");
  cats[2] = c3;

  for (int i = 0; i < 3; i++)
  {
    cats[i].printDescription();
  }

  //Setup Bird Objects
  Bird birds[3];
  Bird b1 = Bird();
  birds[0] = b1;
  Bird b2 = Bird();
  b2.setColor("Green");
  b2.setName("Polly");
  b2.setTalks(true);
  birds[1] = b2;
  Bird b3 = Bird("Ginger", false, "Grey");
  birds[2] = b3;

  //Print out all the animal objects
  for (int i = 0; i < 3; i++)
  {
    birds[i].printDescription();
  }
}
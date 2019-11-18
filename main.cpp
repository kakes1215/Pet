#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Pet.h"

using namespace std;

int main()
{
  //Declare an array of pets
  Pet pets[9];

  //Setup Dog Objects
  Dog d1 = Dog();
  pets[0] = d1;
  Dog d2 = Dog();
  d2.setBreed("German Shepherd");
  d2.setIsTrained(true);
  d2.setName("Buddy");
  d2.setNeuteredSpayed(true);
  pets[1] = d2;
  Dog d3 = Dog("Bella", false, "Corgi", true);
  pets[2] = d3;

  //Setup Cat Objects
  Cat c1 = Cat();
  pets[3] = c1;
  Cat c2 = Cat();
  c2.setMarkings("Tabby");
  c2.setName("Sassy");
  c2.setNeuteredSpayed(true);
  c2.isInsideCat(true);
  pets[4] = c2;
  Cat c3 = Cat("Sammy", false, false, "Calico");
  pets[5] = c3;

  //Setup Bird Objects
  Bird b1 = Bird();
  pets[6] = b1;
  Bird b2 = Bird();
  b2.setColor("Green");
  b2.setName("Polly");
  b2.setTalks(true);
  pets[7] = b2;
  Bird b3 = Bird("Ginger", false, "Grey");
  pets[8] = b3;

  //Print out all the animal objects
  for (Pet pet : pets)
  {
    cout << endl;
    pet.printDescription();
    cout << endl;
  }
}
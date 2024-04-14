#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include <iostream>

using namespace std;

int main() {
    Animal* animal = new Animal("Zvířátko");
    Cat* cat = new Cat("Mourek");
    Dog* dog = new Dog("Hafík");
    Parrot* parrot = new Parrot("Milan");

    cout << "Animal " << animal->getName() << " is saying: " << animal->getSound() << endl;
    cout << "Cat " << cat->getName() << " is saying: " << cat->getSound() << endl;
    cout << "Dog " << dog->getName() << " is saying: " << dog->getSound() << endl;
    cout << "Parrot " << parrot->getName() << " is saying: " << parrot->getSound() << endl;

    delete animal;
    delete cat;
    delete dog;
    delete parrot;

    return 0;
}

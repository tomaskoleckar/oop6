#include "Dog.h"

Dog::Dog(std::string name) : Animal::Animal(name)
{
}

std::string Dog::getSound()
{
    return "HAF";
}

Dog::~Dog()
{

}
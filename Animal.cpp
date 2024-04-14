#include "Animal.h"

Animal::Animal(std::string name)
{
    this->name = name;
}

std::string Animal::getSound() const
{
    return "Making sound";
}

std::string Animal::getName()
{
    return this->name;
}

Animal::~Animal()
{

}
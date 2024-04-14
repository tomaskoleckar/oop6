#include "Cat.h"

Cat::Cat(std::string name) : Animal::Animal(name)
{
}

std::string Cat::getSound()
{
    return "MEOW";
}

Cat::~Cat()
{

}
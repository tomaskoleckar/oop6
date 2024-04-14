#include "Parrot.h"

Parrot::Parrot(std::string name) : Animal::Animal(name)
{
}

std::string Parrot::getSound()
{
    return "I can talk";
}

Parrot::~Parrot()
{

}
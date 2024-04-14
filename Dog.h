#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#pragma once

class Dog : public Animal
{
public:
    Dog(std::string name);
    
    std::string getSound();

    ~Dog();

private:

};

#endif
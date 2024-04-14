#ifndef PARROT_H
#define PARROT_H
#include "Animal.h"
#pragma once

class Parrot : public Animal
{
public:
    Parrot(std::string name);
    
    std::string getSound();

    ~Parrot();

private:

};

#endif
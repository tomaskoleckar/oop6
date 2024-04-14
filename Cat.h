#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#pragma once

class Cat : public Animal
{
public:
    Cat(std::string name);
    
    std::string getSound();

    ~Cat();

private:

};

#endif
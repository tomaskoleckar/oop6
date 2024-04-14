#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

#pragma once

class Animal
{
public:
    Animal(std::string name);
    
    std::string getSound() const;
    std::string getName();
    ~Animal();

private:
    std::string name;
};

#endif
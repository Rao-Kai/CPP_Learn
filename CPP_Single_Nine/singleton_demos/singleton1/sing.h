#pragma once
#include <iostream>

class Sing
{
public:
    Sing()
    {
        std::cout << "Sing construct\n" << std::endl;
        val = 100;
    }
    ~Sing()
    {
        std::cout << "Sing destroy\n" << std::endl;
    }
    
    int val;
};

extern Sing singletonInst;
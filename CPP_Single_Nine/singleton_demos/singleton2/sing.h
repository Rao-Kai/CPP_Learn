#pragma once
#include <iostream>

class Sing
{
public:
    static const Sing& Instance()
    {
        static Sing inst;
        return inst;
    }
    static int& getvalue()
    {
        static Sing sing3; //如果这里不加static每次sing3执行完就会被解析
        return sing3.val;
    }
private:
    Sing()
    {
        std::cout << "Sing construct\n" << std::endl;
        val = 100;
    }
    ~Sing()
    {
        std::cout << "Sing destroy\n" << std::endl;
    }
    
public:
    int val;
};

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
    //不支持拷贝构造 不支持拷贝复制
    Sing(const Sing&) = delete;
    Sing& operator= (const Sing&) = delete;
    //如果在类中没有定义拷贝构造函数，编译器会自行定义一个
    //拷贝构造函数的最常见形式如下：
    /*classname (const classname &obj) {
        // 构造函数的主体
    }*/
public:
    int val;
};

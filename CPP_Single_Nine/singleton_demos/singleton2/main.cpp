#include "sing.h"

int main(int argc, char **argv)
{
    //只在首次调用的时候进构造函数，后面再调用不进去了，即后面再调用不输出Sing construct
    std::cout << "get value: " << Sing::Instance().val << std::endl;
//    std::cout << "get cc: " << Sing::getvalue() << std::endl;
//    int a = Sing::Instance().val;
//    int b = Sing::getvalue();
//    int c = a + b;
//    std::cout << c << std::endl;
//    std::cout << "get cc2: " << Sing::getvalue() << std::endl;
    //通过new在堆上构造，销毁的话需要显示销毁
    //如果写成Sing(Sing::Instance())是会报错的
    //因为这个方式是在栈上生成的，当作用域结束后会自动调用析构函数销毁
    //但是析构函数写在private中，只有在sing.h中的class Sing中才能访问
    Sing *sing2 = new Sing(Sing::Instance());
}

#include <iostream>

int main()
{
    int myVal = 100;
    int* ptr = &myVal;
    int& ref = myVal;

    std::cout << "My number by Value = " << myVal << std::endl;

    *ptr = 50;
    std::cout << "Changed Pointer = " << *ptr << std::endl;

    ref = 30;
    std::cout << "Changed Ref = " << ref << std::endl;

    return 0;
}
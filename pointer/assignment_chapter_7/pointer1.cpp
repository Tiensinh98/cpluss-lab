#include <iostream>

int main()
{
    int a;
    int *ptr;
    ptr = &a;
    *ptr = 2;
    std::cout << "Print" << a;
}
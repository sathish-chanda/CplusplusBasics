#include <iostream>
#include <string>

int main() {

    int a = 25;
    int *ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where is ptr pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    return 0;
}
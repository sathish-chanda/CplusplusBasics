// using pointers we can implement dynamic memory allocation in C++
#include <string>
#include <iostream>
#include "cow.h"

int main() {
    cow *mycow;
    mycow = new cow("Gilbart",10,cow_purpose::hide);
    std::cout <<"Name: "  << (*mycow).getName() << "\nAge: " << mycow->getAge() << "\nPurpose: " << (int) mycow->getPurpose() << std::endl;
    delete mycow;
    return 0;
}
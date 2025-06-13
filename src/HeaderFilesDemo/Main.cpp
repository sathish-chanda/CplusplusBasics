#include <string>
#include <iostream>
#include "cow.h"

int main() {
    cow mycow("Hilly",7,cow_purpose::pet);
    std::cout <<"Name: "  << mycow.getName() << "\nAge: " << mycow.getAge() << "\nPurpose: " << (int) mycow.getPurpose() << std::endl;
    return 0;
}
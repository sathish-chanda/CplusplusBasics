// C++ is compiled language. 
// The code is preprocessed before run by the compiler. 
// One of the step is preprocessing. It will add the code the directives.

#include <iostream> // 1. using #include Preprocessor will add the code here.
#define CAPACITY 5000 // 2. Using #define
#define DEBUG // 3. using #ifdef and #endif 

int main() {
#ifdef DEBUG
    std::cout<<"About to print the value of the CAPACITY" << std::endl;
#endif
    std::cout << "The CAPACITY is " << CAPACITY << std::endl;
    return 0;
}


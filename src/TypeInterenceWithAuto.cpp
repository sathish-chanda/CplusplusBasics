// We use auto for the typeinference in C++
#include <iostream>
#include <typeinfo>

int main() {

    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = 'C';
    auto f = "C++ rocks!";
    auto g = true;

    std::cout << "Type of a is " << typeid(a).name() << std::endl;
    std::cout << "Type of b is " << typeid(b).name() << std::endl;
    std::cout << "Type of c is " << typeid(c).name() << std::endl;
    std::cout << "Type of d is " << typeid(d).name() << std::endl;
    std::cout << "Type of e is " << typeid(e).name() << std::endl;
    std::cout << "Type of f is " << typeid(f).name() << std::endl;
    std::cout << "Type of g is " << typeid(g).name() << std::endl;

    return 0;
}
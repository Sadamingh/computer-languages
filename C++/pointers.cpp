#include <iostream>

int main() {

    int year = 2022;
    int *ptr = &year;

    std::cout << year << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << &year << std::endl;

    return 0;
}
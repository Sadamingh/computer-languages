#include <iostream>

int main() {

    int year = 2022;
    int &ref = year;

    std::cout << year << std::endl;
    std::cout << ref << std::endl;

    year = 2023;

    std::cout << year << std::endl;
    std::cout << ref << std::endl;

    return 0;
}
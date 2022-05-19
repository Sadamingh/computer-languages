#include <iostream>

int main() {
    char a[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < sizeof(a); i++) {
        std::cout << a[i] << std::endl;
    }
}
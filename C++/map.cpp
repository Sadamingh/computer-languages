#include <iostream>
#include <map>

int main() {
    std::map<int, int> a;

    a.insert(std::pair<int, int>(1, 20));
    a.insert(std::pair<int, int>(6, 40));
    a.insert(std::pair<int, int>(5, 70));
    a.insert(std::pair<int, int>(2, -10));

    a[3] = 10;
    a[4] = 30;

    for (std::map<int, int>::iterator it = a.begin(); it != a.end(); it++) {
        std::cout << it->first << ", " << it->second << std::endl;
    }

    std::cout << a[4] << std::endl;
    std::cout << a.at(4) << std::endl;
    a.erase(4);
    std::cout << a[4] << std::endl;
    std::cout << a.at(4) << std::endl;

    for (std::map<int, int>::iterator it = a.begin(); it != a.end(); it++) {
        std::cout << it->first << ", " << it->second << std::endl;
    }
}

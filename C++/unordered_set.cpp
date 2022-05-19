#include <iostream>
#include <unordered_set>
#include <iterator>

int main() {

    std::unordered_set<int> a;

    a.insert(2);
    a.insert(1);
    a.insert(3);
    a.insert(0);

    for (std::unordered_set<int>::iterator it = a.begin(); it != a.end(); it++) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    std::cout << a.count(2) << std::endl;
    a.erase(2);
    std::cout << a.count(2) << std::endl;
    
    for (std::unordered_set<int>::iterator it = a.begin(); it != a.end(); it++) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    return 0;
}
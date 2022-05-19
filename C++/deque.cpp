#include <deque>
#include <iostream>

int main() {

    std::deque<int> a;
    std::cout << a.empty() << std::endl;

    a.push_back(2);
    a.push_back(4);

    std::cout << a.empty() << std::endl;
    std::cout << a.size() << std::endl;
    std::cout << a[0] << ", " << a[1] << std::endl;
    std::cout << a.at(0)<< ", " << a.at(1)<< std::endl;

    a.pop_back();
    std::cout << a.size() << std::endl;
    std::cout << a[0] << std::endl;

    a.push_front(1);
    a.push_front(-1);
    std::cout << a.size() << std::endl;
    std::cout << a.at(0)<< ", " << a.at(1) << ", " << a.at(2) << std::endl;

    a.pop_front();
    a.pop_front();
    std::cout << a.size() << std::endl;
    std::cout << a[0] << std::endl;

    return 0;
}
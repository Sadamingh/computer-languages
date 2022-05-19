#include <queue>
#include <iostream>

int main() {
    std::queue<int> a;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    while (!a.empty()) {
        std::cout << a.front() << std::endl;
        a.pop();
    }

    return 0;
}
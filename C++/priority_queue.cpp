#include <queue>
#include <iostream>

int main() {

    std::priority_queue<int> a;

    a.push(1);
    a.push(5);
    a.push(100);
    a.push(-1);
    a.push(-20);

    while (!a.empty()) {
        std::cout << a.top() << std::endl;
        a.pop();
    }

    return 0;
}
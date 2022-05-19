#include <stack>
#include <iostream>

int main() {
    std::stack<int> a;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    while (!a.empty()) {
        std::cout << a.top() << std::endl;
        a.pop();
    }

    return 0;
}
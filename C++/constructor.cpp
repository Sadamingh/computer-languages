#include <iostream>

class Pizza {
public:
  Pizza() {
    std::cout << "Make a new pizza" << std::endl;
  }
};

int main() {
  Pizza a;
  return 0;
}
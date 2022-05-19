#include <iostream>
#include <string>

class Pizza {
  private:
    std::string favor;

  public:
    Pizza() {
      std::cout << "Make a new pizza" << std::endl;
    }
    int add_favor(std::string s) {
      favor = s;
      return 0;
    }
    std::string get_favor() {
      return Pizza::favor;
    }
};

int main() {
  Pizza a;
  a.add_favor("Pineapple");
  std::cout << a.get_favor() << std::endl;
  return 0;
}

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream ofp("test.txt");

    ofp << "Hello world!";

    ofp.close();

    std::string text;
    std::ifstream ifp("test.txt");

    while (getline(ifp, text)) {
        std::cout << text << std::endl;
    }

    ifp.close();

    return 0;
}
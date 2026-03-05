#include <iostream>

// Order of defining the function does not affect compilation error
void hehe();

int main() {
    std::cout << "HEHE\n";
    hehe();
    return 0;
}

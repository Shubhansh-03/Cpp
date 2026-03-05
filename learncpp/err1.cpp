#include <iostream>

int getvalue() {
    // clang-format off
std::cerr << "getvalue called\n";
    // clang-format on
    return 4;
}
int main() {
    std::cout << getvalue << '\n';
    return 0;
}

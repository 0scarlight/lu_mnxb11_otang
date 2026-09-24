#include <iostream>
bool makeNoise() {
    std::cout << "The makeNoise() function was called!\n";
    return true;
}

int main() {
    double pi{3.141592653589793};
    float pi_narrowed{pi} // This conversion is a warning with {}
    int compiles_with_warning{pi}
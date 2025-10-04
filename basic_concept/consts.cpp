#include <iostream>

int main() {
    std::cout << "\n===== Const =====\n";
    // const variable: value cannot be changed after initialization
    int a = 10; 
    const int b = a;
    const int &c = a;
    const int &d = b;
    a = 20;
    std::cout << "non-const a: " << a << std::endl; // Outputs: 20
    std::cout << "const b: " << b << std::endl;     // Outputs: 10
    std::cout << "const ref c: " << c << std::endl; // Outputs: 20
    std::cout << "const ref d: " << d << std::endl; // Outputs: 10

    return 0;
}
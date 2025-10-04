#include <iostream>

int main() {
    std::cout << "\n===== Const =====\n";
    // const variable: value cannot be changed after initialization
    int a = 10; 
    const int b = a;
    const int &c = a;
    const int &d = b;
    const int *e = &a;
    const int *const f = &a;
    const int *g = &b;
    int *const h = &a; // non-const value but const pointer
    e = &b; // e can point to another address
    g = &a; // g can point to another address
    *h = 20; // value can be changed
    std::cout << "int a: " << a << std::endl; // Outputs: 20
    std::cout << "const int b: " << b << std::endl; // Outputs: 10
    std::cout << "const int ref c: " << c << std::endl; // Outputs: 20
    std::cout << "const int ref d: " << d << std::endl; // Outputs: 10
    std::cout << "const int ptr e: " << *e << std::endl; // Outputs: 20
    std::cout << "const int const ptr f: " << *f << std::endl; // Outputs: 20
    std::cout << "const int ptr g: " << *g << std::endl; // Outputs: 10
    std::cout << "int const ptr h: " << *h << std::endl; // Outputs: 20
    std::cout << "a can be changed the value\n";
    std::cout << "b cannot be changed the value\n";
    std::cout << "c cannot be changed the value\n";
    std::cout << "d cannot be changed the value\n";
    std::cout << "e cannot be changed the value but can point to another address\n";
    std::cout << "f cannot be changed the value and cannot point to another address\n";
    std::cout << "g cannot be changed the value but can point to another address\n";
    std::cout << "h can be changed the value but cannot point to another address\n";
    std::cout << "=================\n\n";

    int x = 30;
    const int y = x, &z = x;
    std::cout << "int x: " << x << std::endl; // Outputs: 30
    std::cout << "const int y: " << y << std::endl; // Outputs: 30
    std::cout << "const int ref z: " << z << std::endl; // Outputs: 30
    x = 40; // x can be changed
    std::cout << "After changing x to 40:\n";       
    std::cout << "int x: " << x << std::endl; // Outputs: 40
    std::cout << "const int y: " << y << std::endl; // Outputs: 30
    std::cout << "const int ref z: " << z << std::endl; // Outputs: 40
    std::cout << "x can be changed the value\n";
    std::cout << "y cannot be changed the value\n";
    std::cout << "z cannot be changed the value\n";
    std::cout << "=================\n\n";

    std::cout << "T *const a = r; a is top-level const\n";
    std::cout << "const T *b = r; b is low-level const\n";
    std::cout << "const T &c= r; reference always low-level\n";
    std::cout << "=================\n\n";

    return 0;
}
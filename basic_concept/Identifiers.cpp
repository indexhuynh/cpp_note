#include <iostream>

int main() {
    std::cout << "\n===== Identifiers in C++ =====\n";
    std::cout << "An identifier can contain letters, digits, and underscores.\n";
    std::cout << "An identifier must start with a letter or an underscore.\n";
    std::cout << "An identifier cannot be a reserved keyword.\n";
    std::cout << "An identifier cannot contain special characters like:\n"
        "\t space ! @ # $ % ^ & * ( ) - + = { } [ ] | \\ : ; \" ' < > , . ? / \n";
    std::cout << "C++ is case-sensitive:\n "
        "\t myVar, MyVar, and MYVAR are different identifiers.\n";
    int __myVar__{10}; // valid but avoid using double underscore at the beginning
    std::cout << "__myVar__ = " << __myVar__ << '\n';
    return 0;
}
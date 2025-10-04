#include <iostream>

std::string check_cpp_version() {
    long version = __cplusplus;
    if (version == 201703L)
        return "C++17";
    else if (version == 201402L)
        return "C++14";
    else if (version == 201103L)
        return "C++11";
    else if (version == 199711L)
        return "C++98";
    else
        return "Another version of C++";
}

int main() {
    std::cout << "C++ version: " << check_cpp_version() << std::endl;
    return 0;
}
#include <iostream>
#include <string>       // For std::string
#include <iomanip>      // For std::setprecision
#include <cstdint>      // For fixed-width integer types
#include <locale> // Required for std::locale

// Use a namespace to encapsulate all notes and helper functions
namespace types_notes {

    void char_demo() {
        std::cout << "\n===== CHARACTER TYPES NOTES =====\n";

        char c{'A'};
        wchar_t wc{L'주'};  // Special character
        char16_t c16{u'주'};
        char32_t c32{U'주'};

        std::cout << "char: " << c
                  << " (ASCII code: " << static_cast<int>(c) << ")\n";

        // wchar_t, char16_t, and char32_t need to be printed as integers
        //      for code points (hard to print in console)
        std::cout << "wchar_t: " << static_cast<uint16_t>(wc)
                  << " (Unicode code point)\n";

        std::cout << "char16_t: " << static_cast<uint16_t>(c16)
                  << " (Unicode code point)\n";

        std::cout << "char32_t: " << static_cast<uint32_t>(c32)
                  << " (Unicode code point)\n";

        std::cout << "Sizes (bytes): char=" << sizeof(char)
                  << ", wchar_t=" << sizeof(wchar_t)
                  << ", char16_t=" << sizeof(char16_t)
                  << ", char32_t=" << sizeof(char32_t) << "\n";
    }

    void int_demo() {
        std::cout << "\n===== INTEGER TYPES NOTES =====\n";
        std::cout << "short = " << sizeof(short) << "bytes\n";
        std::cout << "int = " << sizeof(int) << "bytes\n";
        std::cout << "long = " << sizeof(long) << "bytes\n";
        std::cout << "long long = " << sizeof(long long) << "bytes\n";
        std::cout << "int8_t = " << sizeof(int8_t) << "bytes\n";
        std::cout << "int16_t = " << sizeof(int16_t) << "bytes\n";
        std::cout << "int32_t = " << sizeof(int32_t) << "bytes\n";
        std::cout << "int64_t = " << sizeof(int64_t) << "bytes\n";

    }

    void float_demo() {
        std::cout << "\n===== FLOATING-POINT TYPES NOTES =====\n";

        float f1{0.1f};
        float f2{0.2f};
        float f3{0.3f};
        double d1{333333333333.33333333333333};

        std::cout << std::setprecision(100);
        std::cout << "f1 = " << f1 << ", f2 = " << f2 << ", f3 = " << f3 << "\n";
        std::cout << "f1 + f2 = " << (f1 + f2) << "\n";
        std::cout << "Is (f1 + f2) == f3? "
                  << ((std::abs((f1 + f2) - f3) < 1e-6) ? "Yes (within tolerance)" : "No") << "\n";

        std::cout << "d1 = " << d1 << "\n";

        std::cout << "Sizes (bytes): float=" << sizeof(float)
                  << ", double=" << sizeof(double)
                  << ", long double=" << sizeof(long double) << "\n";
    }

    void string_demo() {
        std::cout << "\n===== STRING TYPE NOTES =====\n";

        std::string str1{"Hello, "};
        std::string str2{"World!"};
        std::string str3 = str1 + str2;

        std::cout << "str1: " << str1 << "\n";
        std::cout << "str2: " << str2 << "\n";
        std::cout << "Concatenated str3: " << str3 << "\n";
        std::cout << "Length of str3: " << str3.length() << "\n";
        std::cout << "Size of str3: " << str3.size() << "\n";
        std::cout << "Capacity of str3: " << str3.capacity() << "\n";
        std::cout << "Max size of str3: " << str3.max_size() << "\n";
    }
} // namespace types_notes

// --- MAIN EXECUTION ---
int main() {
    types_notes::char_demo();
    types_notes::int_demo();
    types_notes::float_demo();
    types_notes::string_demo();
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";
    }
    return 0;
}

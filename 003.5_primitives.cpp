// C++ PRIMITIVES DEMO
// by Dwayne Brock
// 5-17-2025


#include <iostream>
#include <limits>
#include <string>
#include <sstream>

template<typename T>
bool get_input(const std::string& prompt, T& value) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    iss >> value;
    if (!iss || !iss.eof()) {
        std::cerr << "Invalid input. Expected a value of appropriate type.\n";
        return false;
    }
    return true;
}

int main() {
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "-----------------------------------------------------------------------------" << std::endl;
    std::cout << "PRIMITIVE DATATYPES DEMO" <<std::endl;
    std::cout << "by Dwayne Brock" << std::endl;
    std::cout << "written May 17, 2025" << std::endl;
    std::cout << "-----------------------------------------------------------------------------" << std::endl;
    std::cout << "" << std::endl;

    // 1. bool
    bool b1 = true;
    std::cout << "" << std::endl;
    std::cout << "bool example: " << std::boolalpha << b1 << '\n';
    bool b2;
    if (get_input("Enter a bool (0 or 1): ", b2))
        std::cout << "You entered: " << std::boolalpha << b2 << '\n';
    std::cout << "" << std::endl;

    // 2. char
    char c1 = 'A';
    std::cout << "char example: " << c1 << '\n';
    char c2;
    std::string s;
    std::cout << "Enter a single character: ";
    std::getline(std::cin, s);
    if (s.length() == 1) {
        c2 = s[0];
        std::cout << "You entered: " << c2 << '\n';
    } else {
        std::cerr << "Invalid input. Expected a single character.\n";
    }
    std::cout << "" << std::endl;

    // 3. int
    int i1 = 42;
    std::cout << "int example: " << i1 << '\n';
    int i2;
    if (get_input("Enter an integer: ", i2))
        std::cout << "You entered: " << i2 << '\n';
    std::cout << "" << std::endl;

    // 4. float
    float f1 = 3.14f;
    std::cout << "float example: " << f1 << '\n';
    float f2;
    if (get_input("Enter a float: ", f2))
        std::cout << "You entered: " << f2 << '\n';
    std::cout << "" << std::endl;

    // 5. double
    double d1 = 2.718;
    std::cout << "double example: " << d1 << '\n';
    double d2;
    if (get_input("Enter a double: ", d2))
        std::cout << "You entered: " << d2 << '\n';
    std::cout << "" << std::endl;

    // 6. short
    short s1 = 32767;
    std::cout << "short example: " << s1 << '\n';
    short s2;
    if (get_input("Enter a short: ", s2))
        std::cout << "You entered: " << s2 << '\n';
    std::cout << "" << std::endl;

    // 7. long
    long l1 = 123456789L;
    std::cout << "long example: " << l1 << '\n';
    long l2;
    if (get_input("Enter a long: ", l2))
        std::cout << "You entered: " << l2 << '\n';
    std::cout << "" << std::endl;

    // 8. long long
    long long ll1 = 9876543210LL;
    std::cout << "long long example: " << ll1 << '\n';
    long long ll2;
    if (get_input("Enter a long long: ", ll2))
        std::cout << "You entered: " << ll2 << '\n';
    std::cout << "" << std::endl;

    // 9. unsigned int
    unsigned int ui1 = 100u;
    std::cout << "unsigned int example: " << ui1 << '\n';
    unsigned int ui2;
    if (get_input("Enter an unsigned int: ", ui2))
        std::cout << "You entered: " << ui2 << '\n';
    std::cout << "" << std::endl;

    // 10. unsigned long
    unsigned long ul1 = 100000UL;
    std::cout << "unsigned long example: " << ul1 << '\n';
    unsigned long ul2;
    if (get_input("Enter an unsigned long: ", ul2))
        std::cout << "You entered: " << ul2 << '\n';
    std::cout << "" << std::endl;

    // 11. unsigned long long
    unsigned long long ull1 = 10000000000ULL;
    std::cout << "unsigned long long example: " << ull1 << '\n';
    unsigned long long ull2;
    if (get_input("Enter an unsigned long long: ", ull2))
        std::cout << "You entered: " << ull2 << '\n';
    std::cout << "" << std::endl;

    std::cout << "=== End of Demo ===\n";
    std::cout << "" << std::endl;
    
    return 0;
}


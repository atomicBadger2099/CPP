#include <iostream>
// SUBTRACTS NUMBERS OF DOUBLE TYPE


int main()
{

    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;

    std::cout << "\nThis program performs basic subtraction on two numbers.\n" << std::endl;

    double a{0};
    std::cout << "\n\tPlease enter your first value, and press the <enter> key:\n" << std::endl;
    std::cin >> a;
    
    double b{0};
    std::cout << "\n\tPlease enter the value to be subtracted, and press the <enter> key:\n" << std::endl;
    std::cin >> b;

    double c{a - b};
    std::cout << "\nyour answer is: " << c << ".\n" << std::endl;
    
    std::cout << "\nEND PROGRAM.\n" << std::endl;

    return 0;
}

#include <iostream>
// ADDS NUMBERS OF DOUBLE TYPE


int main() 
{

    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;
    
    std::cout << "\nThis program performs basic addition on two numbers.\n" << std::endl;
    
    double x{0};
    std::cout << "\n\tPlease enter your first value, and press the <enter> key:\n" << std::endl;
    std::cin >> x;
    
    double y{0};
    std::cout << "\n\tPlease enter the number to add to the first, and press the <return> key:\n" << std::endl;
    std::cin >> y;
    
    double z{x + y};
    std::cout << "\nyour answer is: " << z << ".\n" << std::endl;
    
    std::cout << "\nEND PROGRAM.\n" << std::endl;
   
    return 0;
}

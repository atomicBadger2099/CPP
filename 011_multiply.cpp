#include <iostream>
// MULTIPLIES NUMBERS OF DOUBLE TYPE


int main()
{    
    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;
    
    std::cout << "\nThis program performs basic multiplication on two numbers.\n" << std::endl;
    
    double f{0};
    std::cout << "\n\tPlease enter your first value, and press the <enter> key:\n" << std::endl;
    std::cin >> f;
    
    double g{0};
    std::cout << "\n\tPlease enter the value to be multiplied by, and press the <enter> key:\n" << std::endl;
    std::cin >> g;
    
    double h{f * g};
    
    std::cout << "\nyour answer is: " << h << ".\n" << std::endl;
    
    std::cout << "\nEND PROGRAM.\n" << std::endl;
   
    return 0;
}

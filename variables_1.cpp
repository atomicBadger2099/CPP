#include <iostream>

int main() 
{
    int var_x1 {9};
    float var_x2 {3.14};
    double var_x3 {3.14159};

    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;

    std::cout << "\tMy name is: Atomic Badger." << std::endl;
    std::cout << "\tMy favorite number is: " << var_x1 << std::endl;
    std::cout << "\tThe numeric value of Pi is: " << var_x2 << std::endl;
    std::cout << "\tPi with more precision: " << var_x3 << std::endl;

    std::cout << "\nEND PROGRAM.\n" << std::endl;

    return 0;
}
    

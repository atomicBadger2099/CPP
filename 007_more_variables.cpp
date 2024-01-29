#include <iostream>

//DEMONSTRATES BASIC I/O WITH VARIABLES


int main()
{
    int var_x1 {9};
    float var_x2 {3.14};
    double var_x3 {3.14159};
    
    std::cout << "\nBEGIN PROGRAM." << std::endl;
    
    
    std::cout << "\n\tMy name is: Atomic Badger" << std::endl;
    std::cout << "\tMy favorite number is: " << var_x1 << std::endl;
    std::cout << "\tThe numeric value of pi is: " << var_x2 << std::endl;
    std::cout << "\tPI with more precision: " << var_x3 << std::endl;
    
    std::cout << "\nEND PROGRAM.\n";
    
    return 0;
}

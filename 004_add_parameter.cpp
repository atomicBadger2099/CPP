#include <iostream>
 
 
double add(double x, double y)
{
    return x + y;
}
 
 
int main()
{
 
    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;
    
    std::cout << "This program adds two numbers. Decimals are allowed but not required.\n" << std::endl;
 
    double x{};
    std::cout << "\n\tPlease enter a value:\n" << std::endl;
    std::cin >> x;
    
    double y{};
    std::cout << "\n\tPlease enter a second value to add to the first value:\n" << std::endl;
    std::cin >> y;
    
    std::cout << "\nYour answer is:\t" << add(x, y) << '\n'; 
    
    std::cout << "\nEND PROGRAM.\n" << std::endl;
    
    return 0;
}

#include <iostream>
 
// DEMONSTRATES I/O AND BASIC VARIABLES IN MODERN C++
// CIN, COUT, AND ENDL ARE INCLUDED
 
int main()
{
    
    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;
 
    int x {5};
    int y {9};
    
    std::cout << "\n\tThis section has predetermined values. \n";
    std::cout << "\n\tThe first value is: " << x << '\n';
    std::cout << "\tThe second value is: " << y << '\n';
    
    int z {x + y};
    
    std::cout << "\tThe sum of " << x << " and " << y << " is: " << z << '\n';
    
    std::cout << "\n\tNow for some input.\n" << std::endl;
    int a{};
    int b{};
    std::cout << "\tPlease enter a single digit integer: \n";
    std::cin >> a;
    std::cout << "\tyou inputted: " << a << std::endl;
    
    std::cout << "\tPlease enter a second single digit integer: \n";
    std::cin >> b;
    std::cout << "\tyou inputted: " << b << std::endl;
    
    int c {a + b};
    std::cout << "\tThe sum of " << a << " and " << b << " is: " << c << '\n';
 
 
    std::cout << "\nEND PROGRAM.\n" << std::endl;
    
    return 0;
}

#include <iostream>

// NESTED IF/ELSE IF STATEMENT, USE OF OPERATORS
 
int main()
{
    std::cout << "\nBEGIN PROGRAM.\n";
 
    std::cout << "\n\tPlease enter an integer number: \n" ;
    int x{0};
    std::cin >> x;
 
    std::cout << "\n\tPlease enter a second integer number: \n" ;
    int y{0};
    std::cin >> y;
 
    if (x == y)
        std::cout << "\nThe numbers are equal to each other.\n";
    else if (x != y)
        std::cout << "\nThe numbers are not equal to each other.\n";
            if (x > y)
                std::cout << x << " is greater than " << y << ".\n";
            else if (x < y)
                std::cout << x << " is less than than " << y << ".\n";
    
    std::cout << "\nEND PROGRAM.\n\n";
   
    return 0;
}

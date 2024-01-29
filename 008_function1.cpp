#include <iostream>
//  PROGRAM THAT DOES BASIC ARITHMETIC CALCULATIONS
// coded by Dwayne Brock 6-24-2022


double add_number()
{
    std::cout << "\n\nfunction to add two numbers:\n" << std::endl;
    
    double x = 0;
    std::cout << "\n\tPlease enter a number:" << std::endl;
    std::cin >> x;
    
    double y = 0;
    std::cout << "\n\tPlease enter a second number:" << std::endl;
    std::cin >> y;
    
    double sum = x + y;
    std::cout << "\n\tThe sum of the two values  is: " << sum << '\n';

    return sum;
}


double subtract_number()
{
    std::cout << "\n\nfunction to subtract two numbers:\n" << std::endl;
    
    double a = 0;
    std::cout << "\n\tPlease enter the first number: " << std::endl;
    std::cin >> a;
    
    double b = 0;
    std::cout << "\n\tPlease enter the second number: " << std::endl;
    std::cin >> b;
    
    double difference = a - b;
    std::cout << "\n\tThe difference of the two values is: " << difference << '\n';
    
    return difference;
}  

    
double multiply_number()
{
	std::cout << "\n\nfunction to multiply two numbers:\n" << std::endl;
	
	double c = 0;
	std::cout << "\n\tPlease enter the first number: " << std::endl;
	std::cin >> c;
	
	double d = 0;
	std::cout << "\n\tPlease enter the second number:" << std::endl;
	std::cin >> d;
	
	double product = c * d;
	std::cout << "\n\tThe two values multiplied together is: " << product << '\n';
	
	return product;
}	
  
 
double divisor()
 {
     std::cout << "\n\nfunction to divide one number by another:\n" << std::endl;
     
     double i = 0;
     std::cout << "\n\tPlease enter the number to be divided: " << std::endl;
     std::cin >> i;
     
     double j = 0;
     std::cout << "\n\tPlease enter the divisor. (please, no dividing by zero!) " << std::endl;
     std::cin >> j;
 
     double divided = i/j;
     std::cout << "\n\tThe result after dividing is: " << divided << '\n';
     
     return divided;
}
 
   
int main()
{

    std::cout << "\nBEGIN PROGRAM." << std::endl;
    
    add_number();
    subtract_number();
    multiply_number();
    divisor();

    std::cout << "\nEND PROGRAM.\n" << std::endl;
    
    return 0;
}

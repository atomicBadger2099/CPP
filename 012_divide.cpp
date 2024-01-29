#include <iostream>
// DIVIDES NUMBERS OF DOUBLE TYPE


int main()
{

	std::cout << "\nBEGIN PROGRAM.\n" << std::endl;

	std::cout << "\nThis program performs basic division with two numbers.\n" << std::endl;

	double j{0};
	std::cout << "\n\tPlease enter your first value, and press the <enter> key:" << std::endl;
	std::cin >> j;
	
	double k{0};
	std::cout << "\n\tPlease enter the value to divide with, and press the <enter> key:" << std::endl;
	std::cout << "\t(Please do not use a zero divisor.)" << std::endl;
	std::cin >> k;
	
	double l{j / k};
	std::cout << "\nYour answer is: " << l << ".\n" << std::endl;
	
	std::cout << "\nEND PROGRAM.\n" << std::endl;
	
	return 0;
}

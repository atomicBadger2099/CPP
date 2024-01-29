#include <iostream>
// BY DWAYNE BROCK
 
int main() {
 
    std::cout << "\nBEGIN PROGRAM." << std::endl;
    
    char choice_1 = 'N';
    std::cout << "\n\tEnter the letter a for option a or b for option b, and hit return:" << std::endl;
    std::cin >> choice_1;
    if ((choice_1 == 'a')||(choice_1 == 'A')) {
        std::cout << "\n\tYou picked the first choice." << std::endl;
        }
    else if ((choice_1 == 'b')||(choice_1 == 'B')) {
        std::cout << "\n\tYou picked the second choice." << std::endl;
        }
    else {
        std::cout << "\n\tERROR.\n" << std::endl;
        }
        
    std::cout << "\nEND PROGRAM.\n" << std::endl;
        
    return 0;
}

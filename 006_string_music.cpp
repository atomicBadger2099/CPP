#include <string>
#include <iostream>
 
// DEMONSTRATES ENTRY OF MULTIWORD STRINGS WITH SPACES
 
int main() 
{
 
    std::cout << "\nBEGIN PROGRAM." << std::endl;
    
    std::cout << "\n\tPlease enter your FULL name:" << std::endl;
    std::string name {};
    std::getline(std::cin>>std::ws, name);
    
    std::cout << "\n\tPlease enter your age: " << std::endl;
    int age {};
    std::cin >> age;
    
    std::cout << "\tPlease enter your favorite food: " << std::endl;
    std::string food {};
    std::getline(std::cin>>std::ws, food);
    
    std::cout << "\n\tYour name is: " << name << std::endl;
    std::cout << "\tYour age is: " << age << std::endl;
    std::cout << "\tPlease feed " << name << " " << food << " at the next meal!" << std::endl;
    
    std::cout << "\nEND PROGRAM.\n";
    
    return 0;
}

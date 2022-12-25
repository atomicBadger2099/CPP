#include <string>
#include <iostream>

int main()
{
    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;

    std::cout << "\n\tPlease enter your FULL name: " << std::endl;
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "\n\tPlease enter your age: " << std::endl;
    int age {};
    std::cin >> age;

    std::cout << "\n\tPlease enter your favorite food: " << std::endl;
    std::string food {};
    std::getline(std::cin >>std::ws, food);

    std::cout << "\n\tYour name is: " << name << std::endl;
    std::cout << "\n\tYour age is: " << age << std::endl;
    std::cout << "\n\tPlease feed " << name << " " << food << " at the next meal!" << std::endl;

    std::cout << "\nEND PROGRAM.\n" << std::endl;

    return 0;
}

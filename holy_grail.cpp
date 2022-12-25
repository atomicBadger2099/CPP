#include <iostream>

int main()
{

    std::cout << "\nBEGIN PROGRAM.\n" << std::endl;

    std::cout << "\nYou have entered the Trial of the Grail." << std::endl;

    std::cout << "\nWhat is your name?" << std::endl;
    std::cout << "(Please enter your answer and hit return)" << std::endl;
    std::string name {};
    std::getline(std::cin>>std::ws, name);

    std::cout << "\nWhat is your quest?" << std::endl;
    std::cout << "(Please enter your answer and hit return)" << std::endl;
    std::string quest {};
    std::getline(std::cin>>std::ws, quest);

    std::cout << "\nWhat is your favorite color?" << std::endl;
    std::cout << "(Please enter your answer and hit return)" << std::endl;
    std::string color {};
    std::getline(std::cin>>std::ws, color);

    std::cout << "\nSIR/DAME KNIGHT:" << std::endl;
    std::cout << "\nYou responded:\n" << std::endl;
    std::cout << "\tNAME:\t\t\t\t\t" << name << std::endl;
    std::cout << "\tQUEST:\t\t\t\t\t" << quest << std::endl;
    std::cout << "\tFAVORITE COLOR:\t\t\t\t" << color << std::endl;

    std::cout << "\nSIR/DAME KNIGHT:\n" << std::endl;
    std::cout << "You have answered wisely." << std::endl;
    std::cout << "You may pass." << std::endl;

    std::cout << "\nEND PROGRAM.\n";

    return 0;

}

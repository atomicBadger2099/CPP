// GRAIL QUEST PROGRAM

#include <iostream>
#include <string>

int main() {
    // OPENING
    std::cout << " " << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
    std::cout << "THE GRAIL QUEST PROGRAM" << std::endl;
    std::cout << "by Dwayne Brock" << std::endl;
    std::cout << "May 17, 2025" << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
    std::cout << " " << std::endl;
    
    std::cout << "\nBEGIN PROGRAM.\n";
    std::cout << "\nThe guardian challenges you with three questions.\n";

    // COLLECT INFO 1
    std::cout << "\nWHAT IS YOUR NAME?\n";
    std::cout << "(The brave knight should answer and hit return, please.)\n";
    std::string name_g;
    std::getline(std::cin, name_g);

    // COLLECT INFO 2
    std::cout << "\nWHAT IS YOUR QUEST?\n";
    std::cout << "(The brave knight should answer and hit return, please.)\n";
    std::string quest_g;
    std::getline(std::cin, quest_g);

    // COLLECT INFO 3
    std::cout << "\nWHAT IS YOUR FAVORITE COLOR?\n";
    std::cout << "(The brave knight should answer and hit return, please.)\n";
    std::string color_g;
    std::getline(std::cin, color_g);
    std::cout << " " << std::endl;

    // ANSWERS
    std::cout << "\nYOU HAVE ANSWERED:\n";
    std::cout << "\n\tNAME: " << name_g;
    std::cout << "\tQUEST: " << quest_g;
    std::cout << "\tCOLOR: " << color_g << "\n";
    std::cout << " " << std::endl;

    // CLOSING
    std::cout << "YOU HAVE CHOSEN WISELY, BRAVE KNIGHT." << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Please turn left at the deadly rabbit and right at the giant horned monster." << std::endl;
    std::cout << " " << std::endl;
    
    std::cout << "---------------------------------------------------------------------" << std::endl;
    std::cout << "END OF PROGRAM." <<std::endl;
    std::cout << "you have reached the end. Now go do something happy." << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
    std::cout << " " << std::endl;

    return 0;
}

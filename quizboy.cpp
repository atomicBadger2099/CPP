#include <iostream>

// DIGITAL QUIZ GAME PROGRAM

int main()
{
    int score = 0;
    char choice = 'X';

    std::cout << "\nBEGIN PROGRAM."  << std::endl;
    std::cout << "\nWelcome to Quizboy, a new sensation in digital quizzing!" << std::endl;
    std::cout << "The game has a total of 150 possible points that may be earned." << std::endl;

    std::cout << "\nFirst Question:" << std::endl;
    std::cout << "Who was the main character in Star Wars: A New Hope?" << std::endl;
    std::cout << "\n\tA.\tHan Solo" << std::endl;
    std::cout << "\tB.\tLeia Organa" << std::endl;
    std::cout << "\tC.\tLuke Skywalker" << std::endl;
    std::cout << "\tD.\tDarth Vader" << std::endl;

    std::cout << "\nPlease enter your answer: A, B, C or D." << std::endl;
    std::cin >> choice;

    if((choice == 'c')||(choice == 'C')) {
        std::cout << "\n\tYou answered correctly!" << std::endl;
        std::cout << "\tYou have been awarded 50 points." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        score  = score + 50;
        }

    else {
        std::cout << "\n\tYou answered incorrectly." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        }

    std::cout << "\nSecond Question:" << std::endl;
    std::cout << "Who was the actor that played the Fourth Doctor on Doctor Who?" << std::endl;
    std::cout << "\n\tA.\tSylvester McCoy" << std::endl;
    std::cout << "\tB.\tTom Baker" << std::endl;
    std::cout << "\tC.\tMatt Smith" << std::endl;
    std::cout << "\tD.\tDavid Tennant" << std::endl;

    std::cout << "\nPlease enter your answer: A, B, C or D." << std::endl;
    std::cin >> choice;

    if((choice == 'b')||(choice == 'B')) {
        std::cout << "\n\tYou answered correctly!" << std::endl;
        std::cout << "\tYou have been awarded 50 points." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        score = score + 50;
        }

    else {
        std::cout << "\n\tYou answered incorrectly." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        }

    std::cout << "\nThird and final Question:" << std::endl;
    std::cout << "Who played Captain Kirk in Star Trek: The Original Series?" << std::endl;
    std::cout << "\n\tA.\tWilliam Shatner" << std::endl;
    std::cout << "\tB.\tChristopher Pine" << std::endl;
    std::cout << "\tC.\tLeonard Nimoy" << std::endl;
    std::cout << "\tD.\tJeffrey Hunter" << std::endl;

    std::cout << "\nPlease enter your answer: A, B, C or D." << std::endl;
    std::cin >> choice;

    if((choice == 'a')||(choice == 'A')) {
        std::cout << "\n\tYou answered correctly!" << std::endl;
        std::cout << "\tYou have been awarded 50 points." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        score = score + 50;
        }

    else {
        std::cout << "\n\tYou answered incorrectly." << std::endl;
        std::cout << "\tPlease go to the next question.\n" << std::endl;
        }

    std::cout << "\nYou have completed the quiz game." << std::endl;
    std::cout << "Your final score:\t" << score << std::endl;

    std::cout << "Thank you for playing! :)" << std::endl;

    std::cout << "\nEND PROGRAM.\n"  << std::endl;
    
    return 0;

}

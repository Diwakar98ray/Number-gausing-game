#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Generate a random number between 1 and 100
    int targetNumber = std::rand() % 100 + 1;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;
    
    int userGuess;
    
    while (true) {
        std::cout << "Take a guess: ";
        std::cin >> userGuess;
        
        if (userGuess < targetNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > targetNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number: " << targetNumber << std::endl;
            break;
        }
    }
    
    return 0;
}

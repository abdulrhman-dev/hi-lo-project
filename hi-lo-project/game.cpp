#include <iostream>

const int MAX_ATTEMPTS = 7;

int getGuess(int count);

bool playHilo(int targetNumber) 
{
    for (int attempt = 1; attempt <= MAX_ATTEMPTS; ++attempt)
    {
        int guessedNumber = getGuess(attempt);
        
        if (guessedNumber == targetNumber)
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
        
        if (guessedNumber > targetNumber)
            std::cout << "Your guess is too high\n";
        else
            std::cout << "Your guess is too low\n";
    }
    
    std::cout << "Sorry, you used all " << MAX_ATTEMPTS << " guesses :( You lose!\n";
    std::cout << "The number was: " << targetNumber << ".\n";

    return false;
}

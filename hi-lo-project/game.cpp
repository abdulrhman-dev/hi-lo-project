#include <iostream>
int getGuess(int count);

bool playHiLo(int number) 
{
	for (int i = 1; i < 8; i++)
	{
		int guessed_num;
		guessed_num = getGuess(i);
		if (guessed_num == number)
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
		if (guessed_num > number)
			std::cout << "Your guess is too high\n";
		if (guessed_num < number)
			std::cout << "Your guess is too low\n";
	}
	std::cout << "Sorry, you used all 7 guesses :(. You lose!\n";
	std::cout << "The number was: " << number << ".\n";

	return false;
}

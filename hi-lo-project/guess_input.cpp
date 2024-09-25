#include <iostream>

int getGuess(int count) 
{
	int guess;
	do
	{
		std::cout << "Guess \"" << count << "\" is : ";
		std::cin >> guess;
		if (!(guess > 0 && guess <= 100))
		{
			std::cout << "The number is between 1 and 100 \n";
		}
	} while (!(guess > 0 && guess <= 100));

	return guess;
}
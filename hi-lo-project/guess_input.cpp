#include <iostream>

int getGuess(int count) 
{
	int guess;
	do
	{
		std::cout << "Guess \"" << count << "\" is : ";
		std::cin >> guess;

		bool success{ std::cin };

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (!success) {
			std::cout << "Recevied invalid input please try again.\n";
			continue;
		}

		if (!(guess > 0 && guess <= 100))
		{
			std::cout << "The number is between 1 and 100 \n";
		}
	} while (!(guess > 0 && guess <= 100));

	return guess;
}
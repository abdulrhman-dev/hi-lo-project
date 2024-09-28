#include <iostream>
#include <limits>

bool playAgain() {
	while (true) {
		char check;

		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> check;

		if (check == 'y' || check == 'Y') {
			return true;
		}
		else if (check == 'n' || check == 'N')
		{
			return false;
		}
		else {
			// Clear the error state and ignore invalid input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

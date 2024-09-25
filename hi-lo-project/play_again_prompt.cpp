#include <iostream>

bool playAgain() {
	while (true) {
		std::cout << "Do you want to try again (y/n)? ";
		char answer{};
		std::cin >> answer;

		bool success{ std::cin };
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();

		if (!success)
			continue;

		if (answer == 'y')
			return true;
		else if (answer == 'n')
			return false;
	}

	return false;
}
#include <iostream>

bool playHiLo(int number);
bool playAgain();

int main()
{
	int number{ 27 };

	do {
		playHiLo(number);
	} while (playAgain());

	return 0;
}


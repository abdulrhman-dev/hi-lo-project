#include <iostream>
#include <random>
#include "play_again_prompt.h" 

int getGuess(int count);
bool playHiLo(int number);

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);

	int randomNumber = dis(gen);

	return 0;
}

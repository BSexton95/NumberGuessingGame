//#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main()
{
	//Tell user to think of a number between 1 to 100
	std::cout << "Think of a number between 1 - 100." << std::endl;
	system("pause");
	system("cls");

	//Initialize random seed
	srand(time(NULL));

	//Initialize the range
	int range = rand() % 100 + 1;

	//Display Random Number
	for (int i = 0; i < range; i++)
	{
		int guess = range;

		std::cout << "\nIs this your number?" << std::endl;
		printf("%u", range);
		
		std::cout << "\n1. Yes" << std::endl;
		std::cout << "2. No" << std::endl;

		int input;
		std::cin >> input;

		if (input == 1)
		{
			std::cout << "Yay I win!" << std::endl;
		}
		else if (input == 2)
		{
			std::cout << "Is your number \n1. Greater than my guess \n2. Less than my guess?" << std::endl;
			std::cin >> input;
			if (input == 1)
			{
				int min = guess;
				range = rand() % (100 - min) + min;
			}
			else if (input == 2)
			{
				int min = guess;
				range = rand() % (100 + min) - min;
			}
		}
	}

	
}

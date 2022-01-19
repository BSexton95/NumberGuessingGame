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
		//The programs guess
		int guess = range;

		//Asks user if the guess was correct
		std::cout << "\nIs this your number?" << std::endl;
		printf("%u", range);
		
		std::cout << "\n1. Yes" << std::endl;
		std::cout << "2. No" << std::endl;

		//Users input
		int input;
		std::cin >> input;

		//If player enters 1 for yes
		if (input == 1)
		{
			//Displays that the program has won
			std::cout << "Yay I win!" << std::endl;
			return 0;
		}
		//If player enters 2 for no
		else if (input == 2)
		{
			//Asks user if guess is greater than or equal to their number
			std::cout << "Is your number \n1. Greater than my guess \n2. Less than my guess?" << std::endl;
			std::cin >> input;

			//If player enters 1 for greater than...
			if (input == 1)
			{
				//...chosses a number greater than the guess
				int min = guess;
				range = rand() % (100 - min) + min;
			}
			//If player enters 2 for less than...
			else if (input == 2)
			{
				//...choses a number less than the guess
				int min = guess;
				range = rand() % (100 + min) - min;
			}
		}
	}
}

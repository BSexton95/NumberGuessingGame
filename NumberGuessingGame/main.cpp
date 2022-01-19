#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/// <summary>
/// My attempt at a number guessing game
/// Comments:
/// //Tell user to think of a number within range
/// //Select a random number within range
/// //Ask if number is correct
///	//If correct, end game
///	//Otherwise ask if higher or lower
///	//Update range
///	//Repeat step 2
/// </summary>
//int main()
//{
//	//Tell user to think of a number between 1 to 100
//	std::cout << "Think of a number between 1 - 100." << std::endl;
//	system("pause");
//	system("cls");
//
//	//Initialize random seed
//	srand(time(NULL));
//
//	//Initialize the range
//	int range = rand() % 100 + 1;
//
//	//Display Random Number
//	for (int i = 0; i < range; i++)
//	{
//		//The programs guess
//		int guess = range;
//
//		//Asks user if the guess was correct
//		std::cout << "\nIs this your number?" << std::endl;
//		printf("%u", range);
//		
//		std::cout << "\n1. Yes" << std::endl;
//		std::cout << "2. No" << std::endl;
//
//		//Users input
//		int input;
//		std::cin >> input;
//
//		//If player enters 1 for yes
//		if (input == 1)
//		{
//			//Displays that the program has won
//			std::cout << "Yay I win!" << std::endl;
//			return 0;
//		}
//		//If player enters 2 for no
//		else if (input == 2)
//		{
//			//Asks user if guess is greater than or equal to their number
//			std::cout << "Is your number \n1. Greater than my guess \n2. Less than my guess?" << std::endl;
//			std::cin >> input;
//
//			//If player enters 1 for greater than...
//			if (input == 1)
//			{
//				//...chosses a number greater than the guess
//				int min = guess;
//				range = rand() % (100 - min) + min;
//			}
//			//If player enters 2 for less than...
//			else if (input == 2)
//			{
//				//...choses a number less than the guess
//				int min = guess;
//				range = rand() % (100 + min) - min;
//			}
//		}
//	}
//}

/// <summary>
/// Instructors walkthrough
/// </summary>
/// <returns></returns>
int main() {
	srand(time(NULL));

	bool shouldGameEnd = false;
	int max = 100;
	int min = 1;

	//Tell user to think of a number within range
	std::cout << "Think of a number from 1 to 100." << std::endl;
	system("pause");

	while (!shouldGameEnd)
	{
		//Find the range
		int range = max - min;
		//Select a random number within range
		int guess = (rand() % range) + min;
		std::cout << "I guess " << guess << ".\n";

		//Ask if number is higher, lower, or equal
		std::cout << "Is your number higher, lower, or equal?\n"
			<< "1. Higher\n"
			<< "2. Lower\n"
			<< "3. Equal\n" << std::endl;

		int input = 0;
		std::cin >> input;

		//If higher or lower, update range and loop
		if (input == 1)
		{
			min = guess + 1;
		}
		else if (input == 2)
		{
			max = guess - 1;
		}
		//Otherwise, end
		else
		{
			shouldGameEnd = true;
			std::cout << "Congratulations. I think I win.\n";
		}

		//Update the range
		range = max - min;
		if (range <= 0)
		{
			shouldGameEnd = true;
			std::cout << "Um.\n";
		}
	}
}
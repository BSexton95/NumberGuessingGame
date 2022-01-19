//#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main()
{
	//Tell user to think of a number between 1 to 100
	std::cout << "Think of a number between 1 - 100." << std::endl;

	//Initialize random seed
	srand(time(NULL));

	//Initialize the range
	int range = rand() % 100 + 1;

	//Display Random Number
	for (int i = 0; i < range; i++)
	{
		printf("%u", range);
		return 0;
	}

	std::cout << "Is this your number?" << std::endl;

}

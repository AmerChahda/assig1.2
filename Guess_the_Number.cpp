/*
 * Guess_the_Number.cpp
 *
 *  Created on: 29 juni 2018
 *      Author: ACH11739
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    int user_number = 0;
    int sys_number;
    char repeat;

    std::cout << "\t\tWellcome to Guessing Number Game\n\t";

    do
    {
		sys_number = rand()%100+1;

		while (1)
		{
			std::cout << "Enter a number between 1&100 and try to guess the number which I choose.\n";
			std::cin >> user_number;

			if (user_number == sys_number)
			{
				std::cout << "\tThat is right YOU GET IT.\n";
				break;
			}
			else if (user_number < sys_number)
			{
				std::cout << "Your number is lower than mine!!!.... Pls. try again....\n ";
			}
			else
				std::cout << "Your number is larger than mine!!!.... Pls. try again....\n ";
		}

		std::cout << "Do you want to continue playing press 'y' or 'Y'\n";
		std::cin >> repeat;

    }
    while ((repeat == 'Y') || (repeat == 'y'));

    std::cout << "See you later!!!";

    return 0;
}



/*
 * Guess_the_Number.cpp
 *
 *  Created on: 29 juni 2018
 *      Author: ACH11739
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char **argv) {
    int user_number=0,sys_number;
    char repeat;
    cout<<"\t\tWellcome to Guessing Number Game\n\t";
    do{
    sys_number=rand()%100+1;
    while(1){
	cout<<"Enter a number between 1&100 and try to guess the number which I choose.\n";
	cin>>user_number;
	if (user_number==sys_number){
	    cout<<"\tThat is right YOU GET IT.\n";
	    break;
	}
	else if(user_number<sys_number){
	    cout<<"Your number is lower than mine!!!.... Pls. try again....\n ";
	}
	else
	    cout<<"Your number is larger than mine!!!.... Pls. try again....\n ";
    }
    cout<<"Do you want to continue playing press 'y' or 'Y'\n";
    cin>>repeat;
    }while ((repeat=='Y')||(repeat=='y'));
    cout<<"See you later!!!";
    return 0;
}



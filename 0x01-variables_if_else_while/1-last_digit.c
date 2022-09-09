#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* File: 1-last_digit.c
*
* Author: mik134
*/

/**
* main - Assign a random number to variable n 
* each time it is executed
* 
* Return: 0
*/

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n);
	last_digit = n % 10;
	if (last_digit > 5)
		printf(" %d and is greater than 5\n",
		last_digit);
	else if (last_digit == 0)
		printf(" %d and is 0\n", last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf(" %d and is less than 6 and not 0\n",
		last_digit);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* File: 0-positive_or_negative.c
*
* Author: mik135
*/

/**
* main - Assigns a random number to n everytime
* it is executed
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

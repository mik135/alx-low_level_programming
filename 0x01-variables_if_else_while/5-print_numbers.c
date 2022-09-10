#include <stdio.h>
/* 
* Files: 5-print_numbers.c
*
* Author: mik135
*/

/**
* main - prints all single digit numbers 
* of base 10 starting from 0
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	return (0);
}
	

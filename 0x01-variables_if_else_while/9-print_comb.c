#include <stdio.h>
/*
* File: 9-print_comb.c
*
* Author: mik135
*/

/**
* main - prints all possible combinations of single digit numbers*
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');

		if (num ==10)
			!putchar(' ');
	}

	return (0);
}

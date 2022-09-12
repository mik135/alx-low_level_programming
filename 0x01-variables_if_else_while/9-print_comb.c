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

	for (num = 0; num <= 9; num++)
	{
		if (num == 9)
		{
			continue;
		}
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	return (0);
}

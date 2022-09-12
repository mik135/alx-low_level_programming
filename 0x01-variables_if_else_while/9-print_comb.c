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

	for (num = 0; num <= 8; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	for (num = 9; ;)
	{
		putchar((num % 10) + '0');
		break;
	}

	return (0);
}

#include <stdio.h>
/*
* File: 101-print_comb4.c
*
* Author: mik135
*/

/**
* main - prints all possible diffrent combinations
* of three digits
*
* Return: 0
*/
int main(void)
{
	int digit_1, digit_2, digit_3;

	for (digit_1 = 0; digit_1 < 8; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 < 9; digit_2++)
		{
			for (digit_3 = digit_2 + 1; digit_3 < 10; digit_3++)
			{
				if (digit_1 != digit_2 && digit_1 != digit_3 && digit_3 != digit_1)
				{
					putchar(digit_1 + '0');
					putchar(digit_2 + '0');
					putchar(digit_3 + '0');
				}
				if (digit_1 == 7 && digit_2 == 8 && digit_3 == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

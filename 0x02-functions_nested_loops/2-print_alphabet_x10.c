#include "main.h"
/*
* File: 2-print_alphabet_x10.c
*
* Author: mik135
*/

/**
* print_alphabet_x10 - prints 10 times the alphabet
* in lowercase followed by a new line
*
* Return: Void
*/
void print_alphabet_x10(void)
{
	int alp, count;

	count = 0;

	while (count < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		count++;
		_putchar('\n');
	}
}

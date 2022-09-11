#include <stdio.h>
/*
* File: 8-print_base16.c
*
* Author: mik135
*/

/**
* main - prints all numbers of base 16 in lowercase
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	char num;

	char hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');
	return (0);
}

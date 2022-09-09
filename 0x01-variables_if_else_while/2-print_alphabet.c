#include <stdio.h>
/*
* File: 2-print-alphabet.c
*
* Author: mik135
*/

/**
* main - prints the alphabet in lowercase
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}


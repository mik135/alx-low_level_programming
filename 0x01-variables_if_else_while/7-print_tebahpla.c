#include <stdio.h>
/*
* File: 7-print_tebahpla.c
*
* Author: mik135;
*/

/**
* main - print the lowercase alphabet in reverse
* followed by a new line
*
* Return: 0;
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}

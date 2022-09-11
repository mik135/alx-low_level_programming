#include <stdio.h>
/*
* File: 6-print-numberz.c
*
* Author: mik135
*/

/**
* main - prints all single digit numbers of base 10
* starting from 0, followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
	}

	putchar('\n');
	return (0);
}

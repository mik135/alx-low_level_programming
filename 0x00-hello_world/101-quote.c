#include <stdio.h>
/* File: 101-quote.c
*
* Author: mik135
*/

/**
* main - prints a long string
*
* Return: 0
*/
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (int count = 0; count < 100; count++)
	{
		if (string[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(string[count]);
	}
	return (0);
}	

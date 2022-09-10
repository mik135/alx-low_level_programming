#include <stdio.h>
/*
* File: 3-print_alphabets.c
*
* Author: mik135
*/

/**
* main - prints the alohabet in lowercase
* and then in uppercase
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	char n, m;
	m = 'A';
	n = 'a';

	if (n <= 'z' && m <= 'Z') {
		while (n <= 'z')
		{
			putchar( n );
			n++;
		}
		while (m <= 'Z')
		{
			putchar ( m );
			m++;
		}
	}

	putchar ('\n');
	
	return (0);
}

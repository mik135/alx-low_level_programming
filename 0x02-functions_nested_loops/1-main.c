#include "main.h"
/*
* File: 1-main.c
*
* Author: mik135
*/

/**
* print_alphabet - prints the lowercase alphabets
*
* Return: void
*/
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}

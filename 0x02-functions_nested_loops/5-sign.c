#include "main.h"
/*
* File: 5-sign.c
*
* Author: mik135
*/

/**
* print_sign - Prints the sign of a number
*
* @n: function integer argument
*
* Return: 1, 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

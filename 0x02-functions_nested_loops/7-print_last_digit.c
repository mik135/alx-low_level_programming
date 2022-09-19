#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @lasdigit: interger to be processed
* Return: lasdigit
*/
int print_last_digit(int lasdigit)
{
	if (lasdigit < 0)
		lasdigit = lasdigit * -1;
	_putchar((lasdigit % 10) + '0');
	return (lasdigit % 10);
}

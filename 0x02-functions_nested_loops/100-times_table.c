#include "main.h"
/**
* print_times_table - A function that prints n times table
* @n: integer to be processed
* Return: void
*/
void print_times_table(int n)
{
	int num, multiple, sol;

	num = 0;

	if(num <= 15 && num >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multiple = 1; multiple <= n; multiple++)
			{
				_putchar(',');
				_putchar(' ');
				sol = num * multiple;
			}
		}
	}
}

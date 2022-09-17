#include "main.h"
/**
* File: 4-isalpha.c
*
* Author: mik135
*/

/**
* _isalpha - function that checks for alphabetic characters
* @c: function argument
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c<= 'z')
	{
		return (1);
	} else
		return (0);
}

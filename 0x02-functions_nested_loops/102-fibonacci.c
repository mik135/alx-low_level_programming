#include <stdio.h>
/**
* main - program that prints the first 50 numbers of the fibonacci sequence
*
* Return: 0;
*/
int main(void)
{
	int term1 = 1, term2 = 2;

	int count, nextnum;

	count = 49;

	printf("%d, %d, ", term1, term2);

	for (int j = 2; j < count; j++)
	{
		nextnum = term1 + term2;
		term1 = term2;
		term2 = nextnum;
		printf("%d, ", nextnum);
	}

	printf("\n");
	return (0);
}

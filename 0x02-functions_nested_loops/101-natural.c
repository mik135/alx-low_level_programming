#include <stdio.h>
/**
* main - prints the sum of all multiples of 3 or 5 below 1024
*
* Return: 0
*/
int main(void)
{
	int m_one, m_two, sum1, sum2, totalsum;

	sum1 = 0;
	sum2 = 0;

	for (m_one = 3; m_one < 1024; m_one++)
	{
		if (m_one % 3 == 0)
		{
			sum1 = sum1 + m_one;
		}
	}

	for (m_two = 5; m_two < 1024; m_two++)
	{
		if (m_two % 5 == 0)
		{
			sum2 = sum2 + m_two;
		}
	}

	totalsum = sum1 + sum2;

	printf("%d", totalsum);
	printf("\n");
	return (0);
}
